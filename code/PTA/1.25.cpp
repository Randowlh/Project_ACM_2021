#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[110][1100];
string in;
bool book[300];
const int mod= 1000000007;
signed main(){
    dp[0][0]=1;
    cin>>in;
    in=" "+in;
    int n=in.size();
    n--;
    for(int i=1;i<=n;i++){
        memset(book, 0, sizeof(book));
        for(int j=i-1;j>=0;j--){
            if(!book[in[j]]){
                book[in[j]]=1;
                for(int k=1;k<=100;k++){
                    dp[k][i]+=dp[k-1][j];
                    dp[k][i]%=mod;
                }
            }
        }
    }
    int ans=0;
    memset(book, 0, sizeof(book));
    for(int i=n;i>=1;i--){
        if(!book[in[i]]){
            book[in[i]]=1;
            for(int j=1;j<=100;j++){
                ans+=dp[j][i];
                ans%=mod;
            }
        }  
    }
    cout<<ans<<endl;
}