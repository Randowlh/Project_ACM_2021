
import http.client
import hashlib
import urllib
# import random
# import json
# import time
from tracemalloc import start
import requests
import random
import json
import time
def trans(strr,flag):
    # 百度appid和密钥需要通过注册百度【翻译开放平台】账号后获得
    appid = '20220303001108210'        # 填写你的appid
    secretKey = '4yXpWx4rtgsdJbyg8lgi'    # 填写你的密钥
    
    httpClient = None
    myurl = '/api/trans/vip/translate'  # 通用翻译API HTTP地址
    fromLang = 'en'       # 原文语种
    toLang = 'zh'           # 译文语种
    if flag==1:
        print("here")
        fromLang, toLang=toLang, fromLang
    print(fromLang,toLang)
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
# 请求网址
requestUrl = "https://xmbot.net/sync/userMessage"
# 用户Id
userId = "testUserId" + str(random.randint(0,9999))
# 消息Id
msgId = str(random.randint(0,999999999))
# 图片url
imgUrl = "http://xmbot.net:10002/download/pic.jpg"
# 问题文本
ques = "What is she doing?"
startTime=time.time()
# 请求体
payload = json.dumps({
    "openid": userId,
    "submit_id": msgId,
    "url": imgUrl,
    "problem": ques,
    "answer":""
    })

r = requests.post(requestUrl, data= payload)
print(r.text)
#计算程序运行时间
endTime = time.time()
print("程序运行时间：%s"%(endTime-startTime))