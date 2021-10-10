#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int cansel_sync=(ios::sync_with_stdio(0),cin.tie(0),0);
template<class T>inline void read(T &x){x=0;char o,f=1;while(o=getchar(),o<48)if(o==45)f=-f;do x=(x<<3)+(x<<1)+(o^48);while(o=getchar(),o>47);x*=f;}
#define ll long long
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repb(i,a,b) for(int i=(a);i>=(b);i--)
#define INF 0x3f3f3f3f
ll gcd(ll a,ll b){ while(b^=a^=b^=a%=b); return a; }
#define int ll
typedef pair<ll,ll> pll;
#define ft first
#define sd second
#define mkp make_pair
const int MAXN = 114514;
int n,m;
int a[MAXN];
int tot;
bool flag;//reverse flag
map<int,int> mp;
map<int,vector<pll>> vec;
// pii <ft,sd> <回合数 , 原始编号>
// 相同回合时编号取最小
int x;
//======tips========
//start from a[1]!

inline void work(){
    int ys,rd,res;
    while(m--){
        cin>>x;if(flag) x = -x;

        if(x==0){cout<<0<<endl;continue;}
        ys = ( x%tot + tot )%tot;
        rd = (x-ys)/tot;
        int siz = vec[ys].size();
        if(siz==0) continue;
        int px = upper_bound(vec[ys].begin(), vec[ys].end(), mkp(rd,(ll)n)) - vec[ys].begin();
        px--;
        if(px<0){ cout<<-1<<endl;continue;}
        res = (rd-vec[ys][px].ft)*n + (n-vec[ys][px].sd);
        cout<<res<<endl;
    }
}
inline void solve(){
    cin>>n>>m;
    mp.clear();
    vec.clear();
    flag = 0;
    a[0] = 0;
    //===========

    rep(i,1,n){
        cin>>a[i];
        a[i] += a[i-1];
    }
    tot = a[n];

    // cout<<"sum a"<<endl;
    // rep(i,1,n) cout<<a[i]<<' ';
    // cout<<endl;
    if(tot==0){//special
        rep(i,1,n){
            if(mp[a[i]]==0) mp[a[i]] = i;
        }

        while(m--){
            cin>>x; if(flag) x=-x;

            if(x==0) cout<<0<<endl;
            else if(mp[x]) cout<<mp[x]<<endl;
            else cout<<-1<<endl;
        }
        return;
    }

    if(tot<0){
        flag = 1;
        tot = -tot;
        rep(i,1,n) a[i] = -a[i];
    }

    //一般情况
    int ys,rd;
    rep(i,1,n){ 
        ys = ( a[i]%tot + tot )%tot;
        rd = (a[i]-ys) / tot;//相当于已经走了多少回合

        // cout<<"insert pair ("<<rd<<','<<i<<")\n"<<endl;
        vec[ys].push_back(mkp(rd,n-i));
    }

    for(auto tv : vec)//对所有vector进行排序
        sort(tv.sd.begin(),tv.sd.end());

    work();
}

signed main(){
    int z;
    cin>>z;
    while(z--) solve();
}