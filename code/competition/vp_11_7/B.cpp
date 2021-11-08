#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a),_=b;i<=(_);i++)
#define int long long
typedef long long ll;
const int LINF = 1ll<<61;
int minn = LINF;
const int MAXN = 114514;
const int N = 1e3+10;
const int mod =1e9+7;
inline int mul(int a,int b,int m) {
    return 1ll*a*b%m;
}
ll pow(ll a,ll b,ll md=mod) {ll res=1;a%=md; assert(b>=0); for(;b;b>>=1){if(b&1)res=mul(res,a,md);a=mul(a,a,md);}return res;}
int I[N];
inline ll inv(int x){
    if(x<=1e6){
        if(I[x]) return I[x];
        return I[x]=pow(x,mod-2);
    }
    return pow(x,mod-2);
}

signed dp[N][21][21];
int G[21][21];
ll n;
void dfs(int x,int u){
    if(dp[x][u][0]) return; 
    int cnt=0;
    dp[x][u][0]=1;
    ll tmp[21];
    rep(i,1,n) tmp[i]=0;
    rep(v,2,n){
        if(G[u][v]&&!((x>>(v-2))&1)){
            cnt++;
            int nx=x|(1<<(v-2));
            dfs(nx,v);
            rep(j,1,n) tmp[j]+=dp[nx][v][j];
        }
    }
    if(cnt){
        cnt=inv(cnt);
        rep(i,1,n){
            dp[x][u][i]=tmp[i]%mod;
            dp[x][u][i]=1ll*dp[x][u][i]*cnt%mod;
        }
    }
    else{
        dp[x][u][u]=1;
    }
}
inline void solve(){
    cin>>n;
    rep(i,1,n) rep(j,1,n){
        cin>>G[i][j];
    }
    dfs(0,1);
    rep(i,1,n) cout<<dp[0][1][i]<<" ";
}

signed main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}