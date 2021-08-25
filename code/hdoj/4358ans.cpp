#include <bits/stdc++.h>
//#include <bits/extc++.h>
//using namespace __gnu_pbds;
//using namespace __gnu_cxx;
#pragma comment(linker,"/STACK:102400000,1024000")
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
#define pii(a,b) pair<a,b>
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
const int maxm= 210000;
const int maxn = 110000;
int n,k;
struct edge{
   int to,nxt;
}eg[maxm];
int head[maxn];
int ecnt=0;
inline void add(int u,int v){
   eg[++ecnt].nxt=head[u];
   eg[ecnt].to=v;
   head[u]=ecnt;
}
inline void cl(int n){
    for(int i=0;i<=n;i++)
        head[i]=0;
    ecnt=0;
}
int weight[maxn];
int sz[maxn];
int cnt[maxn];
int num[maxn];
int hson[maxn];
int ans[maxn];
int lsh[maxn];
void calc(int pos,int flag,int fa){
    num[cnt[weight[pos]]]--;
    if(flag)
        cnt[weight[pos]]++;
    else cnt[weight[pos]]--;
    num[cnt[weight[pos]]]++;
    for(int i=head[pos];i;i=eg[i].nxt){
        int to=eg[i].to;
        if(to==fa)
            continue;
        calc(to,flag,pos);
    }
}
void solve(int pos,int fa,int flag){
    for(int i=head[pos];i;i=eg[i].nxt){
        int to=eg[i].to;
        if(to==fa)
            continue;
        if(hson[pos]==to)
            continue;
        solve(to,pos,1);
    }
    if(hson[pos])
    solve(hson[pos],pos,0);
    for(int i=head[pos];i;i=eg[i].nxt){
        int to=eg[i].to;
        if(to==fa||to==hson[pos])
            continue;
        calc(to,1,pos);
    }
    num[cnt[weight[pos]]]--;
    cnt[weight[pos]]++;
    num[cnt[weight[pos]]]++;
    ans[pos]=num[k];
    if(flag){
        num[cnt[weight[pos]]]--;
        cnt[weight[pos]]--;
        num[cnt[weight[pos]]]++;
        for(int i=head[pos];i;i=eg[i].nxt){
            int to=eg[i].to;
            if(to==fa)
                continue;
            calc(to,0,pos);
        }
    }
}
void dfs(int pos,int fa){
    sz[pos]=1;
    hson[pos]=0;
    int ma=0;
    for(int i=head[pos];i;i=eg[i].nxt){
        int to=eg[i].to;
        if(to==fa)
            continue;
        if(sz[to]>ma){
            ma=sz[to];
            hson[pos]=to;
        }
        sz[pos]+=sz[to];
    }
}
void work()
{
    cin>>n>>k;
    cl(n);
    for(int i=1;i<=n;i++)
        cin>>weight[i],lsh[i]=weight[i];
    sort(lsh+1,lsh+n+1);
    for(int i=1;i<=n;i++)
        weight[i]=lower_bound(lsh+1,lsh+n+1,weight[i])-lsh;
    int u,v;
    for(int i=1;i<=n-1;i++){
        cin>>u>>v;
        add(u,v);
        add(v,u);
    }
    num[0]=n;
    dfs(1,-1);
    solve(1,-1,1);   
    int q;
    cin>>q;
    int x;
    for(int i=1;i<=q;i++){
        cin>>x;
        cout<<ans[x]<<endll;
    }
}
signed main()
{
   #ifndef ONLINE_JUDGE
//    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case #"<<i<<":"<<endll;
        work();
    }
    return 0;
}