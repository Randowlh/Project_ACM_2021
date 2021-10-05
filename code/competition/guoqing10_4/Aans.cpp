#include<bits/stdc++.h>
using namespace std;
const int maxn=110000;
#define int long long
#define ll long long 
bool is_prime[maxn];
int primes[maxn];
int tail;
int mo[maxn];
ll powmod(ll a,ll b,ll mod) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
void euler(int n){
    is_prime[1] = 1;
    for(int i=2;i<=n;i++){
        if(!is_prime[i])
            primes[++tail]=i;
        for(int j=1;j<=tail&&i*primes[j]<=n;j++){
            is_prime[i* primes[j]]=1;
            if(i%primes[j]==0)
                break;
        }
    }
}
int calcphi(int x){
    int ans=x;
    for(int i=1;primes[i]*primes[i]<=x;i++)
        if(x%primes[i]==0){
            ans=ans/primes[i]*(primes[i]-1);
            while(x%primes[i]==0)   x/=primes[i];
        }
    if(x!=1)
        ans=ans/x*(x-1);
    return ans;
}
string tmp;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    euler(1e5+100);
    mo[0]=1e9+7;
    for(int i=1;i<=1e5+5;i++)
        mo[i]=calcphi(mo[i-1]);
    int _;
    cin>>_;
    while(_--){
        cin>>tmp;
        int cnt=0;
        for(int i=tmp.size();i>=0;i--)
            if(tmp[i]=='2')
                cnt++;
        int ans=0;
        for(int i=0;i<tmp.size();i++){
            if(tmp[i]=='0')
                ans++;
            else if(tmp[i]=='1')
                ans=((ans<<1)+2)%mo[cnt];
            else{
                cnt--;
                ans=(3*powmod(2,ans+1,mo[cnt])%mo[cnt]-3+mo[cnt])%mo[cnt];
            }
        }
        cout<<ans<<endl;
    }
}