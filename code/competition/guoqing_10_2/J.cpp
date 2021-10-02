#include <bits/stdc++.h>
//#include <bits/extc++.h>
//using namespace __gnu_pbds;
//using namespace __gnu_cxx;
using namespace std;
#pragma optimize(2)
// #pragma GCC optimize("Ofast,no-stack-protector")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#define rbset(T) tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>
const int inf = 0x7FFFFFFF;
typedef long long ll;
typedef double db;
typedef long double ld;
template<class T>inline void MAX(T &x,T y){if(y>x)x=y;}
template<class T>inline void MIN(T &x,T y){if(y<x)x=y;}
namespace FastIO
{
char buf[1 << 20], buf2[1 << 20], a[20], *p1 = buf, *p2 = buf, hh = '\n';
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
// #define int long long
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
const int maxn = 1100000;
int date[maxn];
int cnt[maxn<<2];
void update(int pos,int l,int r,int ql,int qr,int v){
    if(ql<=l&&qr>=r){
        if(!cnt[pos])
            cnt[pos]=v;
        else if(cnt[pos]!=v) 
            cnt[pos]=-1;
        return;
    }
    int mid=(l+r)>>1;
    if(ql<=mid)
        update(lson(pos),l,mid,ql,qr,v);
    if(qr>mid) 
        update(rson(pos),mid+1,r,ql,qr,v);
}
int query(int pos,int l,int r,int fl){
    if(cnt[pos]==-1)
        return 0;
    if(cnt[pos]){
        if(!fl)
            fl=cnt[pos];
        else if(cnt[pos]!=fl)
            return 0;
    }
    if(l==r){
        if(!fl||fl==date[l])
            return 1;
        else return 0;
    }
    int ans=0;
    int mid=(l+r)>>1; 
    ans+=query(lson(pos),l,mid,fl);
    ans+=query(rson(pos),mid+1,r,fl);
    return ans;
}
int fl=0;
int n,m,T;
void work()
{
    read(n,m,T);
    if(n>m){
        swap(n,m);
        fl=1;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            read(date[((i-1)*m)+j]);
    int x1,y1,x2,y2,k;
    for(int i=1;i<=T;i++){
        read(x1,y1,x2,y2,k);
        if(fl)
            swap(x1,y1),swap(x2,y2);
        for(int i=x1;i<=x2;i++)
            update(1,1,n*m,(i-1)*m+y1,(i-1)*m+y2,k);
    }
    int ans=0;
    ans=query(1,1,n*m,0);
    print(n*m-ans);
    print(n*m);
    print(ans);
}
signed main()
{
   #ifndef ONLINE_JUDGE
   freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
    // std::ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t = 1;
    //cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<":"<<endll;
        work();
    }
    flush();
    return 0;
}