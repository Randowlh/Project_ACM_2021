#include<stdio.h>
class test{
    int a;
    public:
    virtual int n(){return 1;}
}tt;
int main(){
    printf("%d",tt.n());
}

