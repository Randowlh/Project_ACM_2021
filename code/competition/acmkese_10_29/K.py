t=int(input())
for i in range(1,t+1):
    n=int(input())
    #print 输出不换行
    ff=0
    ans=[]
    for j in range(2,6):
        if(n%j==0):
            ans.append(j);
            ff=1;
    for i in ans:
        if  i==ans[ans.__len__()-1]:
            print(i,end="")
        else :
            print(i,end=" ")
    if ff==0:
        print("-1",end="")
    print()