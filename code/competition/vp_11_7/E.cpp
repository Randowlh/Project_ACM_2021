#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a),_=(b);i<=(_);i++)
#define int long long
typedef long long ll;
const int LINF = 1ll<<61;
int minn = LINF;
const int MAXN = 114514;
const int N = 2e5+10;
const int mod =1e9+7;

int ci[N];
bitset<N> bst,b2;
int n;
void cal(int d){
    bst|=(bst<<d)|(bst>>(n-d-1));
    bst&=b2;
}
inline void solve(){
    cin>>n;
    rep(i,0,2*n) b2[i]=1;
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
            cur=cur*v[0]%n;
            ci[cur]=i;
        }
        bst[0]=1;
        bst[1]=1;
        bst[n]=1;
        for(int i=1;i<v.size();i++)
            cal(ci[v[i]]);
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
