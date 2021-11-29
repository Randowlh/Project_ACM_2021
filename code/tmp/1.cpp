#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=  998244353;
const int maxn=510000;
int pre[maxn];
int exgcd(int a, int b, int& x, int& y) {
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
      int q = a1 / b1;
      tie(x, x1) = make_tuple(x1, x - q * x1);
      tie(y, y1) = make_tuple(y1, y - q * y1);
      tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}
inline int niyuan(int x, int mod) { 
    int ans,tmp;
    exgcd(x,mod,ans,tmp);
    return (ans%mod+mod)%mod;
}
void init(){
    pre[0]=1;
    for(int i=1;i<=maxn;i++)
        pre[i]=pre[i-1]*i%mod;
}
int C(int n,int m){
    if(n<m)
        return 0;
    return pre[n]*niyuan(pre[n-m],mod)%mod*niyuan(pre[m],mod)%mod;
}
int sgn(int x)   {
    return (x&1)?mod-1:1;
}
int calc(int n,int m,int k){
    int cnt=0;
    int ans=0;
    int fl=1;
    while((k+1)*cnt<=m&&cnt<=n-m+1){
        ans+=fl*(C(n-m+1,cnt)*C(n-(k+1)*cnt,n-m)%mod);
        ans%=mod;
        ans+=mod;
        ans%=mod;
        cnt++;
        fl=-fl;
    }
    return ans;
}
signed main(){
    int n,m,k;
    cin>>n>>m>>k;
    pre[0]=1;
    for(int i=1;i<=5e5;i++)
        pre[i]=pre[i-1]*i%mod;
    cout<<(calc(n,m,k)-calc(n,m,k-1)+mod)%mod<<endl;
}