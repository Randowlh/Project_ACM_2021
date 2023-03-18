#include<bits/stdc++.h>
using namespace std;
#define maxn 3100
int dp[maxn][maxn];
int a[maxn],b[maxn];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    for(int i=1;i<=n;i++){
        int maxv=0;
        for(int j=1;j<=n;j++){
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            if(a[i]==b[j]){
                dp[i][j]=max(dp[i][j],maxv+1);
            }else if(a[i]>b[j]){
                maxv=max(dp[i-1][j],maxv);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
        ans=max(dp[n][i],ans);
    cout<<ans<<endl;
}