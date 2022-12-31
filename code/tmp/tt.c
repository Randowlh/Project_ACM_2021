#include<stdio.h>
int main(){
    int n;
    double answer=2;
    scanf("%d",&n);
    n--;
    double cur=2;
    for(int i=1;i<=n;i++){
        answer+=(i+cur)/cur;
        cur+=i;
    }
    printf("%.2f\n",answer);
}
