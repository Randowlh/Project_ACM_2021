#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N = 1e6+10;
#define rep(i,a,b) for(int i=a,_=b;i<=_;++i)
#define spt fixed<<setprecision
#define int long long
#define endl '\n'
const int SIZE = 4e6+1000;
const double PI = acos(-1);
struct CP{
    double x,y;
    CP(double x=0,double y=0):x(x),y(y){}
    CP operator +(const CP &A) const{return CP(x+A.x,y+A.y);}
    CP operator -(const CP &A) const{return CP(x-A.x,y-A.y);}
    CP operator *(const CP &A) const{return CP(x*A.x-y*A.y,x*A.y+y*A.x);}
};
int limit,rev[SIZE];
void DFT(CP *F,int op){
    rep(i,0,limit-1) if(i<rev[i])swap(F[i],F[rev[i]]);
    for(int mid=1;mid<limit;mid<<=1){
        CP wn(cos(PI/mid),op*sin(PI/mid));
        for(int len=mid<<1,k=0;k<limit;k+=len){
            CP w(1,0);
            for(int i=k;i<k+mid;i++){
                CP tmp = w*F[i+mid];
                F[i+mid] = F[i] - tmp;
                F[i] = F[i]+tmp;
                w = w*wn;
            }
        }
    }
    if(op==-1) rep(i,0,limit-1) F[i].x /= limit;
}

void FFT(int n,int m,CP *F,CP *G){
    for(limit = 1;limit<=n+m;limit<<=1);
    for(int i=0;i<limit;i++) rev[i] = (rev[i>>1]>>1)|((i&1)?limit>>1:0);
    DFT(F,1);DFT(G,1);
    rep(i,0,limit-1) F[i] = F[i]*G[i];
    DFT(F,-1);
}
int n,k,q;
const int MAXN = 1114514;
int cnt[MAXN],cnt2[MAXN];
int ys[MAXN];
CP a[MAXN],b[MAXN];
double qw[MAXN];
double tqw[110];
int sm[MAXN],z[MAXN];
#define ft first
#define sd second
#define mkp make_pair
typedef pair<int,int> pii;

int res[MAXN];
int sum[MAXN];
const double eps = 1e-7;
inline bool eq(double a,double b){
    return fabs(a-b)<eps;
}

inline void solve(){
    cin>>n>>k>>q;
    int maxx = 0;
    rep(i,1,n){
        cin>>ys[i];
        maxx = max(maxx,ys[i]);
        cnt[ys[i]]++;
    }
    rep(i,0,maxx){
        b[i]=a[i] = CP(cnt[i],0);
    }
    FFT(maxx+10,maxx+10,a,b);
    maxx*=2;
    // int ctot = 0;
    rep(i,0,maxx){
        cnt2[i] = (int)(a[i].x+0.5);
        // cnt2[i] = (int)(a[i].x);
        if(i%2==0) cnt2[i] -= cnt[i/2];
        // if(cnt2[i]%2) while(1);//TLE
        // ctot += cnt2[i];
        cnt2[i] >>= 1;
        sum[i] = sum[i-1] + cnt2[i];
    }
    // rep(i,1,maxx){
    //     if(cnt2[i]) cout<<i<<':'<<cnt2[i]<<endl;
    // }
    // return;
    sum[0] = cnt2[0];
    int tot = n*(n-1)>>1;
    rep(i,1,maxx){
        if(cnt2[i]==0) continue;
        qw[i] = i;
        tqw[0] += cnt2[i]*i;
    } 
    // cout<<"qw70 = "<<qw[70]<<endl;
    tqw[0]/=tot;
    // cout<<"tqw0 = "<<tqw[0]<<endl;
    int now = 0;
    rep(nk,1,k){
        tqw[nk] += sum[now]*tqw[nk-1];
        rep(i,now+1,maxx){
            if(cnt2[i]==0) continue;
            bool flag = 0;
            if(eq(i,tqw[nk-1])){//both
                //both
                qw[i] = i;
                now = i;
            }
            else if(tqw[nk-1]<i){
                //accept
                qw[i] = i;
            }
            else{//qw[i]>i
                //reselect
                qw[i] = tqw[nk-1];
                now = i;
            }
            tqw[nk] += cnt2[i]*qw[i];
        }
        tqw[nk] /= tot;
        // cout<<"now = "<<now<<endl;
        // cout<<"tqw["<<nk<<"] = "<<tqw[nk]<<endl;
    }
    int x,y,z;
    cout<<spt(8)<<tqw[k]<<endl;
    while(q--){
        cin>>x>>y>>z;
        int yss = ys[x] + ys[y];
        if(z==0) cout<<"accept"<<endl;
        else{
            if(eq(yss,tqw[z-1])) cout<<"both";
            else if(yss<tqw[z-1]) cout<<"reselect"<<endl;
            else cout<<"accept"<<endl;
        }
    }// rep(i,1,q){
    //     if(z[i]==0){
    //         cout<<"accept"<<endl;
    //     }
    //     else{
    //         if(res[i]==1) cout<<"reselect"<<endl;
    //         else if(res[i]==-1) cout<<"accept"<<endl;
    //         else cout<<"both"<<endl;
    //     }
    // }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}