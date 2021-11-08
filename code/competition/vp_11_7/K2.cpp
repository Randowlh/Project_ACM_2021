#include<iostream>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repb(i,a,b) for(int i=(a);i>=(b);i--)
#define int long long

typedef pair<int,int> pii;
#define ft first
#define sd second
#define mkp make_pair

int n;
const int LINF = 1ll<<61;
int minn = LINF;
const int MAXN = 114514;
int a[MAXN];
map< int,vector<pii> > mpk;
int b[MAXN];

inline int cal(int ai,int k){//找最xiao的x可以把a[i]除k次
    int div = floor(pow(ai,1.0/(doubl)(k+1)));
    if(div<2) return -1;
    int tai,cnt;
    rep(dv,div-5,div+5){
        if(dv<2) continue;
        tai = ai;
        cnt = 0;
        while(tai/dv) tai/=dv,cnt++;
        if(cnt==k) return dv;
    }
    return -1; 
}

inline void BB(){
    cout<<"Bob"<<endl;
    return;
}
inline void AA(){
    cout<<"Alice"<<endl;
    return;
}

inline void solve(){
    cin>>n;
    rep(i,1,n){
        cin>>a[i];
        minn = min(minn,a[i]);
    }
    int tmpx;
    rep(i,1,n){
        repb(k,50,1){
            //找最xiao的x可以把a[i]除k次
            tmpx = cal(a[i],k);
            if(tmpx==2) continue;
            if(tmpx!=-1){
                mpk[tmpx].push_back(mkp(i,k));
            }
        }
    }

    // for(auto _x:mpk){
    //     cout<<"mp"<<_x.ft<<endl;
    //     for(auto x:_x.sd){
    //         cout<<"("<<x.ft<<','<<x.sd<<"),"<<endl;
    //     }
    // }
    // return;//test
    //start to calculate

    int yhh = 0;
    int nowx = 2;
    rep(i,1,n){
        int ta = a[i];
        while(ta/nowx){
            ta/=nowx;
            b[i]++;
        }
        yhh ^= b[i]; 
    }
    // cout<<"yhh"<<yhh<<endl;
    // return;
    if(yhh==0){
        BB();
        return;
    }
    for(auto __x:mpk){
        vector<pii> &vec = __x.sd;
        for(auto x:vec){
            yhh ^= b[x.ft];
            b[x.ft] = x.sd;
            yhh ^= b[x.ft];
        }
        if(yhh==0){
            // cout<<"choose k = "<<__x.ft<<endl;
            BB();
            return;
        }
    }
    AA();
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}