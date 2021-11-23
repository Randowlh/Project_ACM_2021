import RPI.GPIO as GPIO
import time
BOTTOM_PIN = 17
# 摄像头ov7670驱动程序
# 参考：https://blog.csdn.net/qq_33681421/article/details/82898981  
def init_camera():
    # 初始化摄像头
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(BOTTOM_PIN, GPIO.OUT)
    GPIO.output(BOTTOM_PIN, GPIO.HIGH)
    time.sleep(0.1)
    GPIO.output(BOTTOM_PIN, GPIO.LOW)
    time.sleep(0.1)
    GPIO.output(BOTTOM_PIN, GPIO.HIGH)
    time.sleep(0.1)
def read_camera():
    # 读取摄像头数据
    # 返回值：img
        
        