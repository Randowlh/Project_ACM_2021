#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;

int cansel_sync=(ios::sync_with_stdio(0),cin.tie(0),0);
template<class T>inline void read(T &x){x=0;char o,f=1;while(o=getchar(),o<48)if(o==45)f=-f;do x=(x<<3)+(x<<1)+(o^48);while(o=getchar(),o>47);x*=f;}
#define ll long long
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repb(i,a,b) for(int i=(a);i>=(b);i--)
#define INF 0x3f3f3f3f
ll gcd(ll a,ll b){ while(b^=a^=b^=a%=b); return a; }

typedef pair<int,int> pii;
#define ft first
#define sd second
#define mkp make_pair
typedef pair<int,pii> pip;

const int MAXN = 514514;

map<vector<int>,set<int> > mp;
vector<pip> vec[MAXN];//记录每条边
int px[MAXN];
int res[MAXN];
int n,d;

//===========并查集
vector<int> fa[MAXN];
int find(int dd,int x){
    return fa[dd][x]==x?x:(fa[dd][x]=find(dd,fa[dd][x]));//路经压缩
}
void merge(int dd,int u,int v){
    u = find(dd,u);
    v = find(dd,v);
    if(u<v) fa[dd][v] = u;
    else    fa[dd][u] = v;
}
//===========并查集


void dfs( set<int> st){
    
    cout<<"now set{ ";
    for(auto x:st) cout<<x<<' ';
    cout<<"}\n";

    if(st.size()==1||px[*st.begin()] == n-1){//到了叶子
        //要么就是集合的元素只有一个，要么就是集合的边已经加完了
        int faa = *st.begin();
        for(auto v:st) res[v] = faa;
        return;
    }
    for(auto v:st){
        vector<int> tmp;
        int bianquan = vec[v][px[v]].ft;//同样边权的都拿出来
        pii tpii;
        int uu,vv;
        while(px[v]<n-1 && vec[v][px[v]].ft == bianquan){
            uu = vec[v][px[v]].sd.ft;
            vv = vec[v][px[v]].sd.sd;

            tmp.push_back(find(v,uu));
            tmp.push_back(find(v,vv));

            px[v]++;
        }
        int siz = tmp.size();
        for(int i=0;i<siz;i+=2)
            merge(v,tmp[i],tmp[i+1]);//合并一下

        tmp.push_back(-bianquan);
        //因为同一类的边权也要相同，所以也推到tmp里加入之后的比对,就放在第一个吧(负数最小)

        sort(tmp.begin(),tmp.end());
        tmp.erase(unique(tmp.begin(),tmp.end()),tmp.end());
        mp[tmp].insert(v);//推入集合
        
        cout<<"[";
        for(auto x:tmp) cout<<x<<",";
        cout<<"]\n";

    }
    //往下递归
    for(auto s:mp) dfs(s.sd);
}

set<int> tsd;

inline void solve(){
    cin>>d>>n;
    int tu,tv,tw;
    rep(i,1,d){
        rep(j,1,n-1){
            cin>>tu>>tv>>tw;
            vec[i].push_back(mkp(tw,mkp(tu,tv)));
        }
        sort(vec[i].begin(),vec[i].end(),greater<pip>() );

        //并查集fa数组
        fa[i].push_back(0);//fa[0]无效值
        rep(j,1,n) fa[i].push_back(j);//fa[i]=i;
    }

    rep(i,1,d) tsd.insert(i);//开始包含所有点的集合
    dfs(tsd);

    rep(i,1,d) cout<<res[i]<<' ';
    cout<<endl;
}

int main(){
    solve();
}