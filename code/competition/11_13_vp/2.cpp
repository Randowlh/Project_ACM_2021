#include<cstdio>
//求两个数的最大公约数
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
//test data
int a[]={1,2,3,4,5,6,7,8,9,10};
int b[]={2,3,4,5,6,7,8,9,10,11};
int main(){
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        printf("%d\n",gcd(a[i],b[i]));
    }
    return 0;
}