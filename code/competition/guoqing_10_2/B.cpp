#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
using namespace std;

int cansel_sync=(ios::sync_with_stdio(0),cin.tie(0),0);
template<class T>inline void read(T &x){x=0;char o,f=1;while(o=getchar(),o<48)if(o==45)f=-f;do x=(x<<3)+(x<<1)+(o^48);while(o=getchar(),o>47);x*=f;}
#define ll long long
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repb(i,a,b) for(int i=(a);i>=(b);i--)
#define INF 0x3f3f3f3f
ll gcd(ll a,ll b){ while(b^=a^=b^=a%=b); return a;}
#define int ll
#define ft first
#define sd second
const int MAXN = 114514;
int p[MAXN],d[MAXN],f[MAXN];
int vis[MAXN];
int dep[MAXN];
int pvis[MAXN];
int n;
int res;
map<int,int> e[MAXN];
int dp2[MAXN][2];
int dp[MAXN][2];
const ll LINF = 1ll<<61;
void dfs(int now,int pre){
    dep[now] = dep[pre]+1;
    vis[now] = pre;
    int nxt,cst;
    int top = 0,hc;
    for(auto x:e[now]){
        nxt = x.ft; cst = x.sd;
        if(nxt==pre) continue;
        if(vis[nxt]){//环?
            if(dep[nxt]>dep[now]) continue;
            top = nxt;
            hc = cst;
            continue;
        }
        pvis[nxt] = cst;//记录边权
        dfs(nxt,now);
        dp[now][0] = max(dp[now][0] , max(dp[nxt][0],dp[nxt][1]));
        dp[now][1] = max(dp[now][1] , dp[nxt][0]+cst);
    }
    if(top){
        int px = now;
        dp2[now][1] = dp[now][0] + hc;
        dp2[now][0] = -LINF;
        while(px!=top){
            dp2[vis[px]][0] = max(dp2[px][0],dp2[px][1]);
            dp2[vis[px]][1] = dp2[px][0] + pvis[px];
            px = vis[px];
        }
        dp[top][1] = max(dp[top][1],dp2[top][0]);
    }
}

void solve(){
    cin>>n;
    rep(i,1,n) cin>>p[i];
    rep(i,1,n) cin>>d[i],res+=p[i]-d[i];
    int profit;
    rep(i,1,n){
        cin>>f[i];
        if(f[i]==i) continue;
        profit = (p[i]-d[i]+p[f[i]]-d[f[i]])-p[i];
        if(profit>0){
            e[i][f[i]]=max(e[i][f[i]],profit);
            e[f[i]][i]=e[i][f[i]]; 
        }
    }
    rep(i,1,n){
        if(!vis[i]){
            dfs(i,i);
            res -= max(dp[i][1],dp[i][0]);
        }
    }
    cout<<res<<endl;
}

signed main(){
    solve();
}