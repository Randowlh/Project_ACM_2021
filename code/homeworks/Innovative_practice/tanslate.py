import pyttsx3
# 初始化， 必须要有奥
engine = pyttsx3.init()
engine.setProperty('voice', 'zh')
engine.say('你好，我是小白，我可以帮你翻译一些文字')
engine.say('语音合成开始')
engine.say('我会说中文了，开森，开森')

# 注意，没有本句话是没有声音的
engine.runAndWait()
engine.say('我能说第二句话了')
engine.runAndWait()