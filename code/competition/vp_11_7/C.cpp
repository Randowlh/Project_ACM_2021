#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a),_=b;i<=(_);i++)
#define int long long
typedef long long ll;
const int LINF = 1ll<<61;
int minn = LINF;
const int MAXN = 114514;
const int N = 1e5+10;
const int mod =1e9+7;

int ci[N];
bitset<N> bst;
int n;
void cal(int d){
    bst|=(bst<<d)|(bst>>(n-d));
}
inline void solve(){
    cin>>n;
    bool ok=0;
    vector<int> v;
    rep(i,1,n-1){
        int x; cin>>x;
        x%=n;
        if(!x) continue;
        else if(x==1){
            ok=1;   
        }
        else v.push_back(x);
    }
    if(v.size()&&!ok){
        int cur=1;
        rep(i,1,n-1){
            ci[cur]=i;
            cur=cur*v[0]%n;
        }
        bst[0]=1;
        for(auto x:v){
            cal(ci[x]);
        }
        if(bst[n-1]) ok=1;
    }
    if(ok) cout<<"Yes\n";
    else cout<<"No\n";
    
}

signed main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
