#include<bits/stdc++.h>
using namespace std;
const int mod = 23333;
#define int long long
vector<int> fj[110];
int exgcd(int a, int b, int& x, int& y) {
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
      int q = a1 / b1;
      tie(x, x1) = make_tuple(x1, x - q * x1);
      tie(y, y1) = make_tuple(y1, y - q * y1);
      tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}
inline int niyuan(int x, int mod) { 
    int ans,tmp;
    exgcd(x,mod,ans,tmp);
    return (ans%mod+mod)%mod;
}
int calc(int num,int t){
    int ans=0;
    for(int i=1;i<t;i++)
        if(num%i==0)
            ans++;
    return ans;
}
int dp[110000][11];
void Solve(){
    for(int i=1;i<=10;i++)
        for(int j=1;j<=i;j++)
            if(i%j==0)
                fj[i].push_back(j);
    for(int i=1;i<=1e5;i++){
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                dp[i][0]++;
                if(j*j!=i)
                    dp[i][0]++;
            }
        }
        for(int j=1;j<=10;j++)
            if(i-j>=1)
                dp[i][j]=dp[i-j][0]-calc(i-j,j);
    }
    for(int i=1;i<=10;)
    for(int i=1;i<=1e5;i++)
        for(int j=0;j<=10;j++)
            (dp[i][j]+=dp[i-1][j])%=mod;
    for(int i=1;i<=4;i++){
        for(int j=0;j<=10;j++)
            cout<<dp[i][j]<<' ';
        cout<<endl;
    }
    int t;
    cin>>t;
    int ans=0;
    int n,k;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        int tans=dp[n][k]*niyuan(n*n%mod,mod)%mod;
        cout<<dp[n][k]<<' '<<tans<<endl;
        ans^=tans;
    }
    cout<<ans<<endl;
}
signed main(){
    //freopen("D:\\in.txt","r",stdin);
    //freopen("D:\\out.txt","w",stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T=1; //T=read();
    Solve();
    return 0;
}