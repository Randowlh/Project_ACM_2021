#include <bits/stdc++.h>
using namespace std;
int mod= (1 ? 1000000007 : 998244353);
int dp[11000][800];
int dis[11000];
int T[800][800];
int k,l,n;
void work()
{
    cin>>k>>l;
    int tmp;
    for(int i=1;i<=k;i++)
        for(int j=1;j<=k;j++)
            cin>>T[i][j];
    cin>>n;
    for(int i=1;i<n;i++)
        cin>>dis[i];
    int flag=1;
    dp[1][1]=1;
    for(int i=1;i<n;i++){
        int now=0;
        for(int j=1;j<=k;j++){
            (now=(now+dp[i][j])%mod+mod)%=mod;
            int lf=lower_bound(T[j]+1,T[j]+k+1,dis[i]-l)-T[j];
            int rf=upper_bound(T[j]+1,T[j]+k+1,dis[i]+l)-T[j];
            rf--;
            if(lf>rf)
                continue;
            // cout<<j<<' '<<lf<<' '<<rf<<' '<<T[j][lf-1]<<' '<<T[j][rf-1]<<endl;
            dp[i+1][lf]=(dp[i+1][lf]+now)%mod;
            dp[i+1][rf+1]=((dp[i+1][rf+1]-now)%mod+mod)%mod;
        }
    }
    int ans=0;
    int now=0;
    for(int i=1;i<=k;i++){
        now=(now+dp[n][i])%mod;
        (ans+=now)%=mod;
    }
    cout<<ans<<endl;
}
signed main()
{
   #ifndef ONLINE_JUDGE
   //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<":"<<endll;
        work();
    }
    return 0;
}