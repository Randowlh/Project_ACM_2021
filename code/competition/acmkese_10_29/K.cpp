#include <bits/stdc++.h>
//#include <bits/extc++.h>
//using namespace __gnu_pbds;
//using namespace __gnu_cxx;
using namespace std;
#pragma optimize(2)
//#pragma GCC optimize("Ofast,no-stack-protector")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#define rbset(T) tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>
const int inf = 0x7FFFFFFF;
typedef long long ll;
typedef double db;
typedef long double ld;
template<class T>inline void MAX(T &x,T y){if(y>x)x=y;}
template<class T>inline void MIN(T &x,T y){if(y<x)x=y;}
namespace FastIO
{
char buf[1 << 21], buf2[1 << 21], a[20], *p1 = buf, *p2 = buf, hh = '\n';
int p, p3 = -1;
void read() {}
void print() {}
inline int getc()
{
return p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, 1 << 21, stdin), p1 == p2) ? EOF : *p1++;
}
inline void flush()
{
fwrite(buf2, 1, p3 + 1, stdout), p3 = -1;
}
template <typename T, typename... T2>
inline void read(T &x, T2 &... oth)
{
int f = 0;x = 0;char ch = getc();
while (!isdigit(ch)){if (ch == '-')f = 1;ch = getc();}
while (isdigit(ch)){x = x * 10 + ch - 48;ch = getc();}
x = f ? -x : x;read(oth...);
}
template <typename T, typename... T2>
inline void print(T x, T2... oth)
{
if (p3 > 1 << 20)flush();
if (x < 0)buf2[++p3] = 45, x = -x;
do{a[++p] = x % 10 + 48;}while (x /= 10);
do{buf2[++p3] = a[p];}while (--p);
buf2[++p3] = hh;
print(oth...);
}
} // namespace FastIO
#define read FastIO::read
#define print FastIO::print
#define flush FastIO::flush
#define spt fixed<<setprecision
#define endll '\n'
#define mul(a,b,mod) (__int128)(a)*(b)%(mod) 
#define pow powmod
#define X first
#define Y second
#define lowbit(x) (x&-x)
#define MP make_pair
#define pb push_back
#define pt putchar
#define yx_queue priority_queue
#define lson(pos) (pos<<1)
#define rson(pos) (pos<<1|1)
#define y1 code_by_Rand0w
#define yn A_muban_for_ACM
#define j1 it_is just_an_eastegg
#define lr hope_you_will_be_happy_to_see_this
#define int long long
#define rep(i, a, n) for (register int i = a; i <= n; ++i)
#define per(i, a, n) for (register int i = n; i >= a; --i)
const ll llinf = 4223372036854775851;
const ll mod = (0 ? 1000000007 : 998244353);
ll pow(ll a,ll b,ll md=mod) {ll res=1;a%=md; assert(b>=0); for(;b;b>>=1){if(b&1)res=mul(res,a,md);a=mul(a,a,md);}return res;}
const ll mod2 = 999998639;
const int m1 = 998244353;
const int m2 = 1000001011;
const int pr=233;
const double eps = 1e-7;
const int maxm= 1;
const int maxn = 510000;
int yu[100];

struct P{
    int x,y;
};

#define rep(i,a,b) for(int i=a,_=b;i<=_;++i)
const int N = 1010;
int n,m;
int di[4]={1,0,-1,0};
int dj[4]={0,-1,0,1};
char mat[N][N];
int dis[N][N];
void work()
{
    int n,m; cin>>n>>m;
    rep(i,1,n){
        scanf("%s",mat[i]+1);
    }
    rep(i,0,n+1) rep(j,0,m+1) dis[i][j]=inf;
    queue<P> que;
    rep(i,1,n) rep(j,1,m){
        if(mat[i][j]=='E') {
            dis[i][j]=0;
            que.push((P){i,j});
        }
    }
    while(!que.empty()){
        auto top = que.front(); que.pop();
        rep(k,0,3){
            int ni=top.x+di[k],nj=top.y+dj[k];
            if(1<=ni&&ni<=n&&1<=nj&&nj<=m){
                if(mat[ni][nj]=='.'&&dis[ni][nj]>dis[top.x][top.y]+1){
                    dis[ni][nj]=dis[top.x][top.y]+1;
                    que.push((P){ni,nj});
                }
            }
        }
    }
    //LDRU
    // rep(i,1,n) {
    //     rep(j,1,m) cout<<dis[i][j]<<" ";
    //     cout<<endl;
    // }
    int q; cin>>q;
    //cout<<q<<endl;
    rep(i,1,q){
        int x,y; cin>>x>>y;
        //cout<<x<<" "<<y<<endl;
        char c = mat[x][y];
        //cout<<c<<endl;
        if(c=='.'){
            if(dis[x][y]==inf) cout<<"?\n";
            else{
                if(dis[x][y-1]<dis[x][y]) cout<<"L\n";
                else if(dis[x+1][y]<dis[x][y]) cout<<"D\n";
                else if(dis[x][y+1]<dis[x][y]) cout<<"R\n";
                else if(dis[x-1][y]<dis[x][y]) cout<<"U\n";
            }
        }
        else if(c=='#') cout<<'W'<<endl;
        else if(c=='E') cout<<"E\n";
        else if(c=='X') cout<<"X\n";
    }
}
signed main()
{
   #ifndef ONLINE_JUDGE
   //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
    //std::ios::sync_with_stdio(false);
    //`cin.tie(NULL);
    int t = 1;
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<":"<<endll;
        work();
    }
    return 0;
}