#include <bits/stdc++.h>
using namespace std;
const int inf = 0x7FFFFFFF;
typedef long long ll;
typedef double db;
typedef long double ld;
template<class T>inline void MAX(T &x,T y){if(y>x)x=y;}
template<class T>inline void MIN(T &x,T y){if(y<x)x=y;}
template<class T>inline void rd(T &x){
   x=0;char o,f=1;
   while(o=getchar(),o<48)if(o==45)f=-f;
   do x=(x<<3)+(x<<1)+(o^48);
   while(o=getchar(),o>47);
   x*=f;
}
template<class T>
void wt(T x){
   if(x < 0) putchar('-'), x = -x;
   if(x >= 10) wt(x / 10);
   putchar('0' + x % 10);
}
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
const ll mod = (0 ? 1000000007 : 998244353);
const ll mod2 = 999998639;
const int m1 = 998244353;
const int m2 = 1000001011;
const int pr=233;
const double eps = 1e-7;
const ll llinf = 4223372036854775807;
const int maxm= 1;
const int maxn = 510000;
int date[1100];
int find(int x){
    if(date[x]==x)
        return x;
    else return date[x]=find(date[x]);
}
void merge(int a,int b){
    int l=find(a);
    int r=find(b);
    date[l]=r;
}
pair<int,pair<int,int>> eg[110000];
int cnt=0;
void work()
{
    cnt++;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>eg[i].second.first>>eg[i].second.second>>eg[i].first;
    sort(eg+1,eg+m+1);
    for(int i=1;i<=n;i++)
        date[i]=i;
    int ans=0;
    for(int i=1;i<=m;i++){
        if(find(eg[i].second.first)==find(eg[i].second.second))
            continue;
        ans+=eg[i].first;
        merge(eg[i].second.first,eg[i].second.second);
    }
    cout<<"Case #"<<cnt<<": "<<ans<<" meters"<<endl;
}
signed main()
{
   #ifndef ONLINE_JUDGE
   freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
#endif
std::ios::sync_with_stdio(false);
cin.tie(NULL);
int t = 1;
//cin>>t;
cin>>t;
while (t--)
{
work();
}
return 0;
}