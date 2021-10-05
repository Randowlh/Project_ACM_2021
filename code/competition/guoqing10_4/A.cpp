#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
#define int long long 
int cansel_sync=(ios::sync_with_stdio(0),cin.tie(0),0);
template<class T>inline void read(T &x){x=0;char o,f=1;while(o=getchar(),o<48)if(o==45)f=-f;do x=(x<<3)+(x<<1)+(o^48);while(o=getchar(),o>47);x*=f;}
#define ll long long
#define int ll
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repb(i,a,b) for(int i=(a);i>=(b);i--)
#define INF 0x3f3f3f3f
ll gcd(ll a,ll b){ while(b^=a^=b^=a%=b); return a; }
const int med = 1e9+7;
int euler_phi(int n){
    int res = n; 
    for(int i=2;i*i<=n;i++){
        if(n%i==0){//找到一个质因子 
            res = res/i*(i-1);//先除后乘，防止越界 
            while(n%i==0) n/=i;//把这个因子从n中消除掉 
        }
    }
    if(n>1) res = res/n*(n-1);//大于sqrt的因子最多只有一个 
    return res; 
}
const int MAXN = 114514;
int n;
string s;
int dp[MAXN];
//int layer[MAXN];
int ms[MAXN];
int layer[MAXN];
ll qpow(ll d,ll c,ll med){//快速幂
    ll res = 1;
    while(c){
        if(c&1) res=res*d%med;
        d=d*d%med;c>>=1;
    }
    return res;
}
void solve(){
    cin>>s;
    n = s.length();
    s = ' '+s;
    layer[n+1] = 1;
    repb(i,n,1){
        if(s[i]=='2') layer[i] = layer[i+1]+1;
        else layer[i] = layer[i+1];
    }
    rep(i,1,n){
        if(s[i]=='0') dp[i] = (dp[i-1] + 1)%ms[layer[i]];
        else if(s[i]=='1') dp[i] = 2*(dp[i-1]+1)%ms[layer[i]]; 
        else if(s[i]=='2')
            dp[i] = (3*qpow(2,(dp[i-1]+1)%ms[layer[i]],ms[layer[i]-1])%ms[layer[i]-1]-3+ms[layer[i]-1])%ms[layer[i]-1];
    }
    cout<<dp[n]<<endl;
}

signed main(){
    //init
    ms[1] = med;
    rep(i,2,100010){
        ms[i] = euler_phi(ms[i-1]);
    }//很早就开始变成1了
    int z;
    cin>>z;
    while(z--) solve();
}