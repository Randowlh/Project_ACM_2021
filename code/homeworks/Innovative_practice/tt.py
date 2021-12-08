#用谷歌翻译将英文翻译成中文
def tanslate(word):
    import requests
    import json
    url = 'https://translate.google.cn/translate_a/single?client=gtx&sl=en&tl=zh-CN&dt=t&q='
    url = url + word
    r = requests.get(url)
    r.encoding = 'utf-8'
    result = json.loads(r.text)
    return result[0][0][0]