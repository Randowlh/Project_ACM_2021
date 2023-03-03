import requests
from bs4 import BeautifulSoup

# 请求页面
url = "http://121.41.41.125:8506/"
response = requests.get(url)

# 解析页面并获取选择的答案文本
if response.status_code == 200:
    soup = BeautifulSoup(response.text, 'html.parser')
    selected_answer = soup.find("span", {"class": "selected"}).text
    print("选择的答案：", selected_answer)
else:
    print("Error: Failed to retrieve page")

# 点击页面上的+号跳转到下一个页面
if selected_answer and response.status_code == 200:
    link = soup.find("a", {"class": "plus"})['href']
    next_url = url + link
    next_response = requests.get(next_url)

    # 解析下一个页面并提取所需的信息
    if next_response.status_code == 200:
        next_soup = BeautifulSoup(next_response.text, 'html.parser')
        # 提取所需的信息
        # ...
    else:
        print("Error: Failed to retrieve next page")
