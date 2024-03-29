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
const int MAX_NODE = 210000; // 最大节点数
const int CHARSET_SIZE = 26; // 字符集大小

class AhoCorasick {
    struct TrieNode {
        int next[CHARSET_SIZE]; // 子节点数组
        int fail; // 失败指针
        int end; // 是否为模式串结束节点，大于0表示结束节点
    };

    TrieNode nodes[MAX_NODE];
    int nodeCount;

public:
    AhoCorasick() {
        nodeCount = 1;
        memset(nodes, 0, sizeof(nodes));
    }

    // 向Trie树插入模式串
    void insert(const string& pattern) {
        int current = 0; // 根节点
        for (char ch : pattern) {
            int index = ch - 'a';
            if (!nodes[current].next[index]) {
                nodes[current].next[index] = nodeCount++;
            }
            current = nodes[current].next[index];
        }
        nodes[current].end++; // 标记模式串结束节点
    }

    // 构建失败指针
    void build() {
        queue<int> q;
        nodes[0].fail = -1;
        q.push(0);

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            for (int i = 0; i < CHARSET_SIZE; ++i) {
                int child = nodes[current].next[i];
                if (child) {
                    nodes[child].fail = (current == 0) ? 0 : nodes[nodes[current].fail].next[i];
                    q.push(child);
                } else {
                    nodes[current].next[i] = nodes[nodes[current].fail].next[i];
                }
            }
        }
    }

    // 查询文本中模式串出现的次数
    int query(const string& text) {
        int current = 0;
        int result = 0;

        for (char ch : text) {
            int index = ch - 'a';
            current = nodes[current].next[index];

            for (int temp = current; temp && nodes[temp].end != -1; temp = nodes[temp].fail) {
                result += nodes[temp].end;
                nodes[temp].end = -1; // 防止重复计算
            }
        }

        return result;
    }
};

int work() {
    AhoCorasick ac;
    int n;
    string tmp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        ac.insert(tmp);
    }
    ac.build();
    cin>>tmp;
    cout<<ac.query(tmp)<<endll;
    return 0;

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
    //cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<":"<<endll;
        work();
    }
    return 0;
}