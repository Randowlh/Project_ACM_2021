#include 
using namespace std;
typedef long long ll;
map m;
ll PH(ll x)
{
    ll res=x,a=x;
    for(ll i=2;i*i<=x;i++)
    {
        if(a%i==0)
        {
            res=res/i*(i-1);
            while(a%i==0) a/=i;
        }
    }
    if(a>1) res=res/a*(a-1);
    return res;
}
ll quick_pow(ll a,ll b,ll mod)
{
    ll ans=1;
    while(b)
    {
        if(b&1) ans=(ans*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return ans;
}
char s[100005];
ll dfs(ll i,ll mod)
{      
    if(i==0) return 0;
    else if(s[i]=='0') return (dfs(i-1,mod)+1)%mod;
    else if(s[i]=='2') return ((3ll*quick_pow(2,dfs(i-1,m[mod])+1,mod)-3)%mod+mod)%mod;
    else return (2*dfs(i-1,mod)+2)%mod;
}
int main()
{
    ll mo=1e9+7;
    while(mo!=1)
    {
        m[mo]=PH(mo);
        mo=m[mo];
    }
    m[1]=1;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        ll mod=1e9+7;
        cin>>s+1;
        int n=strlen(s+1);
        printf("%lld\n",dfs(n,mod));
    }
    return 0;
}
/*
1  x+2
2  3*2^(x+1)-x
*/