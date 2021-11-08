#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a),_=(b);i<=(_);i++)
#define int long long
typedef long long ll;
const int LINF = 1ll<<61;
int minn = LINF;
const int MAXN = 114514;
const int N = 2e5+10;
const int mod =1e9+7;

int ci[N];

template<class T>void prime_factor(T x,vector<T>&Q){
	Q.clear();
	while(x%2==0)Q.push_back(2),x/=2;
	while(x%3==0)Q.push_back(3),x/=3;
	for(T i=5;i*i<=x;i+=6)if(x%i==0||x%(i+2)==0){
		while(x%i==0)Q.push_back(i),x/=i;
		while(x%(i+2)==0)Q.push_back(i+2),x/=i+2;
	}
	if(x>1)Q.push_back(x);
}
int min_G(int n){
	vector<int>Q;
	prime_factor(n,Q);
	if(n==2||n==4);
	else if(n%2==1&&Q.size()>=1&&Q[0]==Q.back());
	else if(n%4==2&&Q.size()>=2&&Q[1]==Q.back());
	else return -1;
	prime_factor(n-1,Q);
	Q.erase(unique(Q.begin(),Q.end()),Q.end());
	for(int i=1;i<n;i++){
		bool flag=1;
		for(auto j:Q){
			int res=1,a=i,b=(n-1)/j;
			while(b){
				if(b&1)res=1ll*res*a%n;
				a=1ll*a*a%n;
				b>>=1;
			}
			if(res==1){flag=0;break;}
		}
		if(flag)return i;
	}
}
bitset<N> bst,b2;
int n;
void cal(int d){
    bst|=(bst<<d)|(bst>>(n-d-1));
    bst&=b2;
}
inline void solve(){
    cin>>n;
    rep(i,0,2*n) b2[i]=1;
    bool ok=0;
    vector<int> v;
    int yg=min_G(n);
    rep(i,1,n-1){
        int x; cin>>x;
        x%=n;
        if(!x) continue;
        else if(x==1){
            ok=1;   
        }
        else v.push_back(x);
    }
    if(v.size()&&!ok){
        int cur=1;
        rep(i,1,n-1){
            cur=cur*yg%n;
            ci[cur]=i;
        }
        bst[0]=1;
        for(int i=0;i<v.size();i++)
            cal(ci[v[i]]);
        if(bst[n-1]) ok=1;
    }
    if(ok) cout<<"Yes\n";
    else cout<<"No\n";
    
}

signed main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
