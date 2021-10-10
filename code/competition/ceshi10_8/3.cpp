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
const int maxm= 1;
const int maxn = 110000;
int n, m;
struct Node{
    int x,y,z;
    bool operator<(Node a){
        return z>a.z;
    }
}egs[maxn<<1];
vector<pair<int,int>> mp[maxn];
int val[maxn];
int cnt = 0;
int rk[maxn];
int dfn[maxn];
#define lson(x) (x << 1)
#define rson(x) (x << 1 | 1)
struct seg
{
    int v;
    int l;
    int r;
    inline void set(int a = 0, int b = 0, int c = 0, int d = 0) { v = a, l = b, r = c;}
} date[4 * maxn + 100];
inline void pushup(int pos)
{
    date[pos].v = min(date[lson(pos)].v,date[rson(pos)].v);
}
void build(int pos, int l, int r)
{
    if (l == r)
    {
        date[pos].set(val[l], l, r);
        return;
    }
    date[pos].set(0, l, r);
    int mid = (l + r) >> 1;
    build(lson(pos), l, mid);
    build(rson(pos), mid + 1, r);
    pushup(pos);
}
int query(int pos, int l, int r)
{
    if (date[pos].l >= l && date[pos].r <= r)
        return date[pos].v;
    int ans = llinf;
    int mid = (date[pos].l + date[pos].r) >> 1;
    if (l <= mid)
        MIN(ans,query(lson(pos), l, r));
    if (r >= mid + 1)
        MIN(ans,query(rson(pos), l, r));
    return ans;
}
struct node
{
    int depth, top, sz, fa, hson,vhson;
    node(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0) : depth(a), top(b), sz(c), fa(d), hson(e) {}
    inline void init() { depth = 0, top = 0, sz = 0, fa = 0, hson = 0; }
} tree[maxn];
int tree_build(int x, int dep)
{
    tree[x].hson = 0;
    tree[x].depth = dep;
    tree[x].sz = 1;
    for (int i = 0; i < mp[x].size(); i++)
    {
        if (mp[x][i].X == tree[x].fa)
            continue;
        tree[mp[x][i].X].fa = x;
        tree[x].sz += tree_build(mp[x][i].X, dep + 1);
        if (tree[mp[x][i].X].sz > tree[tree[x].hson].sz){
            tree[x].hson = mp[x][i].X;
            tree[x].vhson=i;
        }
    }
    return tree[x].sz;
}
void tree_decomposition(int x, int top,int vv)
{
    tree[x].top = top;
    cnt++;
    dfn[x] = cnt;
    val[cnt]=vv;
    rk[cnt] = x;
    if (tree[x].hson == 0)
        return;
    tree_decomposition(tree[x].hson, top,mp[x][tree[x].vhson].Y);
    for (int i = 0; i < mp[x].size(); i++)
        if (mp[x][i].X != tree[x].hson && mp[x][i].X != tree[x].fa)
            tree_decomposition(mp[x][i].X, mp[x][i].X,mp[x][i].Y);
}
inline int tree_path_sum(int u, int v)
{
    int tol = llinf;
    while (tree[u].top != tree[v].top)
    {
        if (tree[tree[u].top].depth < tree[tree[v].top].depth)
            swap(u, v);
        MIN(tol, query(1, dfn[tree[u].top], dfn[u]));
        u = tree[tree[u].top].fa;
    }
    if (tree[u].depth < tree[v].depth)
        swap(u, v);
    if(u==v) return tol;
    MIN(tol , query(1, dfn[v]+1, dfn[u]));
    return tol;
}
int fa[maxn];
int find(int x){if(fa[x]^x)return fa[x]=find(fa[x]);return x;}
void merge(int a,int b){fa[find(a)]=find(b);}
void work()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        fa[i]=i,dfn[i]=rk[i]=0,tree[i].init(),mp[i].clear(),val[i]=llinf;
    cnt=0;
    for(int i=1;i<=m;i++)
        cin>>egs[i].x>>egs[i].y>>egs[i].z;
    sort(egs+1,egs+m+1);
    for(int i=1;i<=m;i++){
        if(find(egs[i].x)!=find(egs[i].y)){
            merge(egs[i].x,egs[i].y);
            mp[egs[i].x].push_back(MP(egs[i].y,egs[i].z));
            mp[egs[i].y].push_back(MP(egs[i].x,egs[i].z));
        }
    }
    HTXD
    E3GN
    for(int i=1;i<=n;i++)
        if(!dfn[i]){
            tree_build(i,1);
            tree_decomposition(i,i,llinf);
        }
    build(1,1,n);
    int q;
    cin>>q;
    int u,v;
    // for(int i=1;i<=n;i++)
    //     cout<<val[i]<<endl;
    for(int i=1;i<=q;i++){
        cin>>u>>v;
        if(find(u)!=find(v)){
            cout<<-1<<endll;
            continue;
        }else cout<<tree_path_sum(u,v)<<endll;
    }
}
signed main()
{
   #ifndef ONLINE_JUDGE
   //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<":"<<endll;
        work();
    }
    return 0;
}