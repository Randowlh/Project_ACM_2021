#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
#pragma optimize(3)
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#define ls pos<<1
#define rs pos<<1|1
int cansel_sync=(ios::sync_with_stdio(0),cin.tie(0),0);
template<class T>inline void read(T &x){x=0;char o,f=1;while(o=getchar(),o<48)if(o==45)f=-f;do x=(x<<3)+(x<<1)+(o^48);while(o=getchar(),o>47);x*=f;}
#define ull unsigned long long
#define ll long long
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repb(i,a,b) for(int i=(a);i>=(b);i--)
#define INF 0x3f3f3f3f
ll gcd(ll a,ll b){ while(b^=a^=b^=a%=b); return a; }
const int MAXN = 2114514;
int prm[MAXN];
int zyz[MAXN];//记录最大质因子
bool cnt[MAXN];
int n,cp;
int dp[MAXN];

inline void init_ai(){
    zyz[1] = 1;
    rep(i,2,MAXN-5){
        if(zyz[i]) continue;
        for(int j=i;j<=MAXN-5;j+=i) zyz[j]=max(zyz[j],i);
    }
}
//单调队列
typedef pair<int,int> pii;
#define ft first
#define sd second
#define mkp make_pair
priority_queue<pii,vector<pii>,greater<pii> > q;

#define ull unsigned long long

void solve(){
    priority_queue<pii,vector<pii>,greater<pii> > tmq;//clear
    swap(tmq,q);
    cin>>n>>cp;
    memset(cnt,0,sizeof(cnt));
    rep(i,1,cp){
        cin>>prm[i];
        cnt[prm[i]] = 1;
    };
    rep(i,1,n) dp[i] = INF;
    int now,tmp;
    rep(i,1,prm[cp]-1) dp[i] = 1;
    rep(i,1,n){
        //cout<<"check"<<i<<endl;
        while(!q.empty()&&q.top().sd<i) q.pop();
        if(!q.empty()) dp[i] = min(dp[i],q.top().ft);
        if(dp[i]<INF){
            now = i;
            while(now!=1&&cnt[zyz[now]]==0) now/=zyz[now];//质因数分解找最大质因子
            if(now==1) continue;
            //cout<<"find"<<zyz[now]<<endl;
            //cout<<"update"<<dp[i]+1<<" ("<<i+1<<','<<i+zyz[now]-1<<")\n";
            q.push(mkp(dp[i]+1,i+zyz[now]-1));
        }
    }

    // rep(i,1,n) cout<<dp[i]<<' ';
    // cout<<endl;

    ull res=0,di=1;
    repb(i,n,1){
        if(dp[i]<INF) res += di*(ull)dp[i];
        di *= 23333;
    }
    cout<<res<<endl;
}

signed main(){
    init_ai();
    //rep(i,1,12) cout<<zyz[i]<<' ';
    // cout<<endl;
    int z;
    cin>>z;
    while(z--) solve();
}