
import http.client
import hashlib
import urllib
# import random
# import json
# import time
from aip import AipSpeech
from tracemalloc import start
import requests
import random
import json
import time
import pyaudio
import wave
import os
import sys
import speech_recognition as sr
import time
import RPi.GPIO as GPIO 
import pyttsx3
import time
import requests
import threading
import threading
import random
import json
import picamera
from picamera.array import PiRGBArray
now=1
BUTTON=17 
GPIO.setmode(GPIO.BCM)
camera = picamera.PiCamera()
GPIO.setup(BUTTON,GPIO.IN)
camera.framerate = 40
camera.resolution = (400, 300)
stopsignal=0
#os.close(sys.stderr.fileno())
p = pyaudio.PyAudio()   
def trans(strr,flag):
    # 百度appid和密钥需要通过注册百度【翻译开放平台】账号后获得
    appid = '20220303001108210'        # 填写你的appid
    secretKey = '4yXpWx4rtgsdJbyg8lgi'    # 填写你的密钥
    httpClient = None
    myurl = '/api/trans/vip/translate'  # 通用翻译API HTTP地址
    fromLang = 'en'       # 原文语种
    toLang = 'zh'           # 译文语种
    if flag==1:
        fromLang, toLang=toLang, fromLang
    salt = random.randint(32768, 65536)
    # 手动录入翻译内容，q存放
    q = strr
    sign = appid + q + str(salt) + secretKey
    sign = hashlib.md5(sign.encode()).hexdigest()
    myurl = myurl + '?appid=' + appid + '&q=' + urllib.parse.quote(q) + '&from=' + fromLang + \
            '&to=' + toLang + '&salt=' + str(salt) + '&sign=' + sign
    # 建立会话，返回结果
    try:
        httpClient = http.client.HTTPConnection('api.fanyi.baidu.com')
        httpClient.request('GET', myurl)
        # response是HTTPResponse对象
        response = httpClient.getresponse()
        result_all = response.read().decode("utf-8")
        result = json.loads(result_all)
        return result['trans_result'][0]['dst']
    except Exception as e:
        print (e)
    finally:
        if httpClient:
            httpClient.close()
def takephoto():
    camera.capture('image.jpg')
    path = "image.jpg"
    url = 'http://xmbot.net:10002/up_photo'
    res = requests.post(url=url, files={'photo': open(path, 'rb')})
    stra= ""
    cnt=0
    for i in res.text:
        if(cnt==3):
            stra=stra+i
        if(i=='"'):
            cnt=cnt+1
    stra=stra[:-1];
    return stra
def watch():
    global stopsignal
    global now
    while True:
        if stopsignal==1:
            break
        sate = GPIO.input(BUTTON) 
        if sate:
            now=0
        else:
            now=1
        #time.sleep(1)
def recode():
    global p
    CHUNK = 512
    FORMAT = pyaudio.paInt16
    CHANNELS = 1
    RATE = 16000
    RECORD_SECONDS = 5
    WAVE_OUTPUT_FILENAME = "output.wav"
    global now
    stream = p.open(format=FORMAT,
                channels=CHANNELS,
                rate=RATE,
                input=True,
                frames_per_buffer=CHUNK)
    print("recording...")
    frames = []
    for i in range(0, int(RATE / CHUNK *100000000)):
        data = stream.read(CHUNK)
        frames.append(data)
        if  now!=1:
            break
    print("done")
    stream.stop_stream()
    stream.close()
    p.terminate()
    wf = wave.open(WAVE_OUTPUT_FILENAME, 'wb')
    wf.setnchannels(CHANNELS)
    wf.setsampwidth(p.get_sample_size(FORMAT))
    wf.setframerate(RATE)
    wf.writeframes(b''.join(frames))
    wf.close()
def speech_to_text():
    """ 你的 APPID AK SK """
    APP_ID = '25711936'
    API_KEY = 'hxmr9f6rQGtLAlp2GkRwpNKv'
    SECRET_KEY = 'iDHAMWfXfMHRbkE5j40xKcnF5xgtH6Tt'

    client = AipSpeech(APP_ID, API_KEY, SECRET_KEY)

    # 读取文件
    def get_file_content(file_path):
        with open(file_path, 'rb') as fp:
            return fp.read()
    # 识别本地文件
    result = client.asr(get_file_content('output.wav'), 'wav', 16000, {
        'dev_pid': 1537,  # 默认1537（普通话 输入法模型），dev_pid参数见本节开头的表格
    })
    print ("识别结果："+result['result'][0])
    return  result['result'][0]

def upload(text,stra):
    # 请求网址
    requestUrl = "https://xmbot.net/sync/userMessage"
    # 用户Id
    userId = "testUserId" + str(random.randint(0,9999))
    # 消息Id
    msgId = str(random.randint(0,999999999))
    # 图片url
    stt="http://xmbot.net:10002/download/"+stra;
    imgUrl = stt;
    # 问题文本
    ques = text
    # 请求体
    payload = json.dumps({
        "openid": userId,
        "submit_id": msgId,
        "url": imgUrl,
        "problem": ques,
        "answer":""
        })
    r = requests.post(requestUrl, data= payload)
    #print(r.text)
    return r.text

def main():
    global p
    global now
    global stopsignal
    wat=threading.Thread(target=watch,args=())
    wat.start()
    flag=0
    stra=""
    while True:
        recod=threading.Thread(target=recode,args=())
        if now==1:
            if flag==0:
                recod.start()
            stra=takephoto()
            flag=1
        else:
            if flag==0:
                continue
            try:
                recod.join()
            except:
                print("already finished")
            p = pyaudio.PyAudio()   
            flag=0
            #speech_to_text()
            t=trans(speech_to_text(),1)
            print("trans="+t)
            t=upload(t,stra)
            os.system("espeak -vzh \""+trans(t,0)+"\"")
main()