#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
inline ll rd(){
	ll x=0;char o,f=1;
	while(o=getchar(),o<48)if(o==45)f=-f;
	do x=(x<<3)+(x<<1)+(o^48);
	while(o=getchar(),o>47);
	return x*f;
}
const int maxn=1e3+5;
const ll mod=1e9+7;
ll n,d,dp[maxn][maxn][2],vis[maxn][maxn],e[maxn][maxn];
int main() {
    n=rd();d=rd();
    for (int i=1,l,r;i<=d;i++){
    	l=rd();r=rd();
    	r=l+r;
    	l=r-2*(r-l);
    	vis[l][r]=1;
    	for (int j=0;j<l;j++)for (int k=l+1;k<r;k++)e[j][k]=1;
    	for (int j=r+1;j<=n;j++)for (int k=l+1;k<r;k++)e[k][j]=1;
    }
	for (int i=0;i<=n;i++)dp[i][i+1][0]=1;
    for (int len=3;len<=n+1;len++){
    	for (int i=0;i<=n;i++){
    		int j=i+len-1;
    		if (j>n)break;
    		if (e[i][j])continue;
    		dp[i][j][0]=(dp[i][j-1][0]+dp[i][j-1][1])%mod;
    		for (int k=j-2;k>=j-10&&k>i;k-=2)
    			dp[i][j][0]=(dp[i][j][0]+dp[k][j][1]*(dp[i][k][0]+dp[i][k][1])%mod)%mod;
    		if (len%2&&len<=11)dp[i][j][1]=dp[i][j][0];
    		if (vis[i][j])dp[i][j][0]=0;
    	}
    }
    printf("%lld\n",(dp[0][n][0]+dp[0][n][1])%mod);
    return 0;
}
