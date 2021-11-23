#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=998244353;
const int maxn=2100;
int dp[maxn<<1][2100][2];
int sz[maxn<<1];
int f[maxn<<1];
int n;
vector<int> mp[maxn<<1];
void dfs(int pos,int fa){
    sz[pos]=1;
    dp[pos][0][0]=1;
    for(auto to:mp[pos]){
        if(to==fa)continue;
        dfs(to,pos);
        for(int i=sz[pos]/2;i>=0;i--){
            for(int j=0;j<=sz[to]/2;j++){
                if(j){
                (dp[pos][i+j][0]+=dp[pos][i][0]*(dp[to][j][0]+dp[to][j][1])%mod)%=mod;
                (dp[pos][i+j][1]+=dp[pos][i][1]*(dp[to][j][1]+dp[to][j][0])%mod)%=mod;
                }
                (dp[pos][i+j+1][1]+=dp[pos][i][0]*dp[to][j][0]%mod)%=mod;
            }
        }
        sz[pos]+=sz[to];
    }
   // cout<<pos<<' '<<sz[pos]<<endl;
}
signed main(){
    cin>>n;
    int u,v;
    for(int i=1;i<n*2;i++){
        cin>>u>>v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    dfs(1,0);
    f[0]=1;
    for(int i=1;i<=n;i++)
        f[i]=f[i-1]*(i*2-1)%mod;
    int ans=0;
    for(int i=0;i<=n;i++)
        ans+=((i&1)?-1:1)*((dp[1][i][0]+dp[1][i][1])%mod*f[n-i]%mod);
    ans%=mod;
    ans=(ans+mod)%mod;
    cout<<ans<<endl;
}