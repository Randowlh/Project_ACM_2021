#include<bits/stdc++.h>
using namespace std;
const double eps = 1e-7;
double calc(double x,double re,double d,double k){
    return x+log(3.7*k/(2*d)+6.5*x/re)/log(10);
}
int main(){
    double l=0,r=100000000;
    double re=1,d=1,k=1;
    cin>>k>>d>>re;
    while(fabs(r-l)>eps){
        double mid=(l+r)/2;
        if(calc(mid,re,d,k);<0)
            l=mid;
        else r=mid;
    }
    printf("%.10f\n",l);
}