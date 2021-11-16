#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
double p[maxn];
double dp[maxn][3];
int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>p[i];
    for(int i=n;i>=1;i--){
        dp[i][0]=(dp[i+1][0]+1)*p[i];
        dp[i][1]=(dp[i+1][1]+dp[i+1][0]*2+1)*p[i];
        dp[i][2]=dp[i+1][2]+(dp[i+1][1]*3+dp[i+1][0]*3+1)*p[i];
    }
    cout<<fixed<<setprecision(1) << dp[1][2]<<endl;
}