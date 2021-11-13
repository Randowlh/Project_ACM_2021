import time
#read a int and a time string
a=int(input())
b=input()
#convert b to a time object
b=time.strptime(b,"%S")
for i in range(a):
    #read two time objects like this
    # 0:0:0.0 -> 0:0:0.0
    first=time.strptime(input(),"%H:%M:%S")
    tt=input()
    second=time.strptime(input(),"%H:%M:%S")
    first=first+b
    second=second+b
    print(str(first.__format__("%H:%M:%S"))+ str(second.__format__("%H:%M:%S")))