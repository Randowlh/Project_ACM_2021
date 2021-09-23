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
#define int unsigned long long
#define rep(i, a, n) for (register int i = a; i <= n; ++i)
#define per(i, a, n) for (register int i = n; i >= a; --i)
const ll llinf = 4223372036854775851;
const ll mod = (0 ? 1000000007 : 998244353);
int powmod(int a,int b) {int res=1;a%=mod;for(;b;b>>=1){if(b&1)res=res*a;a=a*a;}return res;}
const ll mod2 = 999998639;
const int m1 = 998244353;
const int m2 = 1000001011;
const int pr=1000001011;
const double eps = 1e-7;
const int maxm= 1;
const int maxn =210000;
vector<int> mp[20];
int cf[20];
int ans[20];
int aa=0;
int dd[maxn][20];
unordered_set<int> M(maxn*100);
void work()
{
    cf[0]=1;
    for(int i=1;i<20;i++)
        cf[i]=cf[i-1]*pr;
    int n;
    cin>>n;
    int tmp;
    for(int i=1;i<=n;i++){
        int c;
        cin>>c;
        for(int j=1;j<=c;j++)
            cin>>tmp,mp[i].push_back(tmp);
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        int now=0,tot=0;
        for(int j=1;j<=n;j++){
            cin>>dd[i][j];
            now=now*pr+dd[i][j];
            tot+=mp[j][dd[i][j]-1];
        }
        M.insert(now);
        dd[i][11]=now;
        dd[i][12]=tot;
    }
    int now=0;
    for(int i=1;i<=n;i++)
        now=now*pr+mp[i].size();
    if(!M.count(now)){
        for(int i=1;i<=n;i++)
            cout<<mp[i].size()<<' ';
        cout<<endll;
        return;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            int tt=dd[i][11];
            int tot=dd[i][12];
            if(dd[i][j]==1)
                continue;
            tt-=(dd[i][j])*cf[n-j];
            tt+=(dd[i][j]-1)*cf[n-j];
            tot=tot-mp[j][dd[i][j]-1]+mp[j][dd[i][j]-2];
            if(M.count(tt)==0&&aa<tot){
                aa=tot;
                for(int j=1;j<=n;j++)
                    ans[j]=dd[i][j];
                ans[j]--;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<' ';
    cout<<endl;
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
    // cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<":"<<endll;
        work();
    }
    return 0;
}