
#pragma comment(linker, "/STACK:102400000,102400000")
#include<bits/stdc++.h>
using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); ++i)
#define repf(i,n,m) for(int i=(n); i<=(m); ++i)
#define repd(i,n,m) for(int i=(n); i>=(m); --i)
#define N 100005
 
 
int v[N];
int g[N];
vector<int>vec[N];
int n,m,len,q;
int lson[N],rson[N];
int b[N];
int dp[N];
int ans[N];
struct node{
	int l,r,i;
};
node a[N];
 
void dfs(int s,int fa)//l和r分别指的是问的数的左右的
{
     lson[s]=rson[s]=len++;
	 b[s]=v[s-1];//一个从1开始的，一个从0开始的
	 rep(i,vec[s].size())
	 {
		 int y=vec[s][i];
		 if(y==fa) continue;
		 dfs(y,s);
		 rson[s]=rson[y];
	 }
}
bool cmp(const node a,const node b)
{
	return a.r<b.r;
}
int lowbit(int x)
{
	return x&(-x);
}
void update(int x,int l)
{
	for(;x<=n; x+=lowbit(x))
		dp[x]+=l;
}
int sum(int x)
{
	int ans=0;
	for(; x>0; x-=lowbit(x))
		ans+=dp[x];
	return ans;
}
int main()
{
	int test;
	scanf("%d",&test);
	int x,y;
	repf(ror,1,test)
	{
		memset(dp,0,sizeof(dp));
		scanf("%d%d",&n,&m);
		rep(i,n)
			scanf("%d",&v[i]),g[i]=v[i];
		//数值进行离散化的
        sort(g,g+n);
		int pl=unique(g,g+n)-g;
		rep(i,n)
			v[i]=lower_bound(g,g+pl,v[i])-g;
		//线性化的
		repf(i,0,n) vec[i].clear();
		rep(i,n-1)
			scanf("%d%d",&x,&y),
			vec[x].push_back(y),
			vec[y].push_back(x);
		len=1;//记录的东西的啊
        dfs(1,-1);
		scanf("%d",&q);
		rep(i,q)
		{
			scanf("%d",&x);
			a[i].l=lson[x];
			a[i].r=rson[x];
			a[i].i=i;
		}
		sort(a,a+q,cmp);
		repf(i,0,n) vec[i].clear();
		int l=0;
		repf(i,1,n)
		{
			int y=b[i];
			vec[y].push_back(i);
			if(vec[y].size()>=m)
			{
				//如果相等的话就前面的加1的
				if(vec[y].size()==m)
					update(vec[y][0],1);
				else
					//如果大于的话，就需要进行减去操作，还要减去之前减2的
					update(vec[y][vec[y].size()-m-1],-2),
						update(vec[y][vec[y].size()-m],+1);
			}
			while(a[l].r==i && l<n)
				ans[a[l].i]=sum(a[l].r)-sum(a[l].l-1),
					l++;
			if(l==n) break;
		}
		printf("Case #%d:\n",ror);
		rep(i,q)
			printf("%d\n",ans[i]);
		if(ror!=test)
			printf("\n");
	}
	return 0;
}
