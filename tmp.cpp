#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<=(b);i++)

const int INF = 0x7fffffff;
const int MAXN = 114514;
map<int,int> dp[MAXN];
int color[MAXN];
int minn[MAXN],sum[MAXN];
vector<int> e[MAXN];
int n;
#define ft first
#define sd second

void dfs(int pos){
    minn[pos] = INF;
    sum[pos] = 0;
    int maxx = 0, maxp;
    if(e[pos].size()==0){
        dp[pos][color[pos]] = 0;
        minn[pos] = 1;
        sum[pos] = 0;
        return;
    }
    for(auto to:e[pos]){
        dfs(to);
        if(dp[to].size()>maxx){
            maxx = dp[to].size();
            maxp = to;
        }
    }
    //add large son
    swap(dp[pos],dp[maxp]);
    swap(sum[pos],sum[maxp]);
    swap(minn[pos],minn[maxp]);

    for(auto son:e[pos]){
        if(son==maxp) continue;
        for(auto &x:dp[son]){
            minn[son] = min(minn[son],x.sd+1);
        }

        for(auto &x:dp[son]){
            dp[pos][x.ft] += dp[son][x.ft] - minn[son];
            sum[pos] += minn[son];
            sum[pos] += sum[son];
        }
    }
}
inline void solve(){
    cin>>n;
    int tfa;
    rep(i,2,n){
        cin>>tfa;
        e[tfa].push_back(i);
    }
    rep(i,1,n) cin>>color[i];
    dfs(1);
    rep(i,1,n){
        dp[1][i] += sum[1];
        minn[1] = min(minn[1],dp[1][i]+1);
    }
    cout<<minn[1]<<endl;
}

int main(){
    solve();
}