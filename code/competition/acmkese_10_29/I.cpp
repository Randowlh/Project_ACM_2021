#include<iostream>
#include<algorithm>
using namespace std;
#define rep(i,a,b ) for(int i=(a);i<=(b);i++)
#define ll long long
#define int ll

const int MAXN = 114514;
int a[MAXN];
int n,k,t;
int tot;
const ll LINF = 1ll<<61;

inline void solve(){
    cin>>n>>k>>t;
    rep(i,1,n) cin>>a[i];
    tot = 0;
    rep(i,1,n) tot += a[n] - a[i];
    int res = tot;
    int resi=-1,resj=-1;

    a[n+1] = LINF;
    int px;
    int tres;
    rep(i,1,n-1){
        //find first dayu
        px = upper_bound(a+1,a+n+1+1,a[i]+k)-a;
        px--;
        if(px==i) continue;
        tres = tot + i*(t-(a[px]-a[i]));
        if(tres<res){
            res = tres;
            resi = i;resj = px;
        }
    }
    if(resi==-1) cout<<-1<<endl;
    else cout<<resi<<' '<<resj<<' '<<res<<endl;
}

signed main(){
    solve();
}