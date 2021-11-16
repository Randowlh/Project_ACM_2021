#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod;
int fpow(int a,int b){
    int res=1;
    while(b){
        if(b&1)res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}
signed main(){
    int a,b;
    cin>>a>>b>>mod;
    cout<<a<<'^'<<b<<" mod "<<mod<<'='<<fpow(a,b)<<endl;
}