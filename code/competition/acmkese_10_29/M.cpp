#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define rep(i,a,b ) for(int i=(a);i<=(b);i++)
#define ll long long
#define int ll

const int MAXN = 114514;
int a[MAXN];
int n;
int pos[MAXN];
int vis[MAXN];
int b[MAXN];
vector<int> e[MAXN];

int dfs(int now){
    vis[now] = 1;
    int ret = 1;
    for(auto x:e[now]){
        if(vis[x]) continue;
        ret += dfs(x);
    }
    return ret;
}

inline void solve(){
    cin>>n;
    rep(i,1,n){
        cin>>a[i];
        pos[a[i]]=i;
    }
    int res = 0;
    rep(deg,1,359){
        int tres = 0;
        rep(i,1,n){
            vis[i] = 0;
            e[i].clear();
        }
        rep(i,1,n){
            b[i] = (a[i] + deg)%360;
            if(pos[b[i]]){
                e[i].push_back(pos[b[i]]);
                e[pos[b[i]]].push_back(i);
            }
        }
        rep(i,1,n){
            if(vis[i]) continue;
            tres += dfs(i)/2;
        }
        res = max(res,tres);
    }
    cout<<res<<endl;
}

signed main(){
    solve();
}