#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b ) for(int i=(a);i<=(b);i++)
#define ll long long

const int MAXN = 5e5+10;

int v[114514];
int summ;
int n,m;

//计算三角形面积 海伦公式
double getArea(double a,double b,double c){
    double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
struct S{
    int w,p;
    bool operator < (const S &b){
        return w*b.p>b.w*p;
    }
};

ll f[MAXN];
S a[100];
inline void solve(){
    int b,n; cin>>b>>n;
    rep(i,1,b){
        cin>>a[i].w>>a[i].p;
    }
    ll sum=0;
    rep(i,1,n){
        int a,b,c; cin>>a>>b>>c;
        ll area=ceil(getArea(a,b,c));
        sum+=area;
    }
    sum=(sum+29)/30;
    sort(a+1,a+1+b);
    ll ans=0;
    ll x=1e5-100;
    if(sum>=x){
        int cnt=(sum-x+a[1].w-1)/a[1].w;
        ans+=cnt*a[1].p;
        sum-=cnt*a[1].w;
    }
    rep(i,1,2e5) f[i]=1e18;
    rep(i,1,b){
        rep(j,1,1e5+100){
            if(j>=a[i].w){
                f[j]=min(f[j],f[j-a[i].w]+a[i].p);
            }   
        }
    }
    for(int i=1e5+100;i>=0;i--){
        f[i]=min(f[i],f[i+1]);
    }
    ans+=f[sum];
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}