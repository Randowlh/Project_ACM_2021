import pyautogui
import time
from pynput.mouse import Button, Controller
mouse = Controller()

def zan():
    time.sleep(0.5)    # 等待 0.5 秒
    try:
        left, top, width, height=pyautogui.locateOnScreen('zan.png')
    except:
        return
    print("left="+str(left)+" top="+str(top)+" width="+str(width)+" height="+str(height))
    center = pyautogui.center((left, top, width, height))    # 寻找 图片的中心
    pyautogui.moveTo(center)
    mouse.click(Button.left)
    # pyautogui.click(center)    # 点击
    print('点赞成功！')
pyautogui.FAILSAFE =False   # 关闭安全模式
while True:
    if pyautogui.locateOnScreen('zan.png'):
        zan()   # 调用点赞函数
    else:
        pyautogui.scroll(-500)    # 本页没有图片后，滚动鼠标；
        print('没有找到目标，屏幕下滚~')