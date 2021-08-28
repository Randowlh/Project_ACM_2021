#include<iostream>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define INF 0x7fffffff
const int N = 5e3+5;
const int M = 114514;//因为是双向边,要记得开两倍大的数组!
int n;
//前向星存图
int t=1;//总边数
int u[M],v[M],c[M],co[M],nxt[M],head[M];
inline void add_edge(int x,int y,int z,int zo){//起点终点流量费用
    u[++t]=x;v[t]=y;//正向边
    c[t]=z;co[t]=zo;
    nxt[t]=head[x];head[x]=t;
    u[++t]=y;v[t]=x;//反向边
    c[t]=0;co[t]=-zo;
    nxt[t]=head[y];head[y]=t;
}
//SPFA
int S,T;
int q[M],l,r;//双端队列
int dis[N];
bool in[N];//在不在queue中
int f[N];//记录路径
inline bool spfa(){
    rep(i,1,n) in[i]=0,dis[i]=INF;//初始化
    dis[S]=0;in[S]=1;
    l=r=M>>1;q[l]=S;//手写队列
    while(l<=r){
        int now=q[l++];//取队首
        if(now==T) continue;
        for(int i=head[now];i;i=nxt[i])
            if(c[i]&&dis[now]+co[i]<dis[v[i]]){//费用更小的路
                dis[v[i]]=dis[now]+co[i];
                f[v[i]]=i;//记录路径!增广路经过哪些边
                if(!in[v[i]]){//如果队中没有则入队
                    in[v[i]]=1;
                    if(dis[v[i]]<dis[q[l]])q[--l]=v[i];else q[++r]=v[i];
                    //双端队列优化spfa
                }
            }
        in[now]=0;
    }
    return dis[T]<INF;//是否找到增广路
}
int i,tmp;
inline void costflow(){
    int ans=0,flow=0;//最小费用,最大流
    while(spfa()){
        //从终点根据记录的f找到增广路
        for(tmp=INF,i=T;i!=S;i=u[f[i]]) if(tmp>c[f[i]]) tmp=c[f[i]];
        //求这一次流多少(所有边剩余流量中最小值)
        for(ans+=dis[i=T]*tmp;i!=S;i=u[f[i]]) c[f[i]]-=tmp,c[f[i]^1]+=tmp;
        //减去流量并加在反向边上,并且计算费用
        flow+=tmp;
    }
    printf("%d %d\n",flow,ans);
}
int main(){
    int m;
    scanf("%d%d%d%d",&n,&m,&S,&T);
    int u,v,z,zo;
    while(m--){
        scanf("%d%d%d%d",&u,&v,&z,&zo);
        add_edge(u,v,z,zo);
    }
    costflow();
}
//参考claris费用流板子
//洛谷P3381
//https://www.luogu.com.cn/problem/P3381