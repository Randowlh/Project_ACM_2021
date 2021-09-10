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
const int maxn = 510000;
struct segtree{
	int seg[maxn<<2];
	int lazy[maxn<<2];
	inline void pushup(int x){
		seg[x]=seg[lson(x)]+seg[rson(x)];
	}
	inline void pushdown(int l,int r,int x){
		if(!lazy[x])
		return;
		int mid=l+r>>1;
		seg[lson(x)]+=lazy[x]*(mid-l+1);
		lazy[lson(x)]+=lazy[x];
		lazy[rson(x)]+=lazy[x];
		seg[rson(x)]+=lazy[x]*(r-mid);
		lazy[x]=0;
	}
	void build(int a[],int x,int l,int r){
		lazy[x]=0;
		if(l==r){
			seg[x]=a[l];
			return;	
		}
		int mid=l+r>>1;
		build(a,lson(x),l,mid);
		build(a,rson(x),mid+1,r);
		pushup(x);
	}
	void update(int x,int l,int r,int ql,int qr,int v){
		if(l>=ql&&r<=qr){
			seg[x]+=(r-l+1)*v;
			lazy[x]+=v;
			return;
		}
		pushdown(l,r,x);
		int mid=(l+r)>>1;
		if(ql<=mid)
			update(lson(x),l,mid,ql,qr,v);
		if(qr>mid)
			update(rson(x),mid+1,r,ql,qr,v);
		pushup(x);
	}
	int query(int x,int l,int r,int ql,int qr){
		if(ql<=l&&qr>=r)
			return seg[x];
		int mid=l+r>>1,ans=0;
		pushdown(l,r,x);
		if(ql<=mid)
			ans+=query(lson(x),l,mid,ql,qr);
		if(qr>mid)
			ans+=query(rson(x),mid+1,r,ql,qr);
		return ans;
	}
}tree;
int date[maxn];
void work()
{
	int n,m;
	read(n,m);
	for(int i=1;i<=n;i++)
		read(date[i]);
	tree.build(date,1,1,n);
	for(int i=1;i<=m;i++){
		int opt,a,b,c;
		read(opt);
		if(opt^1){
			read(a,b);
			print(tree.query(1,1,n,a,b));
		}else {
			read(a,b,c);
			tree.update(1,1,n,a,b,c);
		}
	}
	flush();
}
signed main()
{
   #ifndef ONLINE_JUDGE
   //freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
#endif
	//std::ios::sync_with_stdio(false);
	//cin.tie(NULL);
	int t = 1;
	//cin>>t;
	for(int i=1;i<=t;i++){
		//cout<<"Case #"<<i<<":"<<endll;
		work();
	}
	return 0;
}