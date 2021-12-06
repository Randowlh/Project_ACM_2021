#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
struct node{
    int nxt,to,w,flag;
}egs[maxn];
int head[maxn],cnt;
inline void add(int u,int v,int w){
    egs[cnt].to=v;
    egs[cnt].w=w;
    egs[cnt].nxt=head[u];
    head[u]=cnt;
    cnt++;
}
int low[maxn],dfn[maxn];
int n,m,cnt,top;
void tarjan(int pos,int eg){
    low[pos]=dfn[pos]=++cnt;
    for(int i=head[pos];i!=-1;i=egs[i].nxt){
        int v=egs[i].to;
        if(i==eg)
            continue;
        if(!dfn[v]){
            tarjan(v,eg^1);
            low[pos]=min(low[pos],low[v]);
        }else{
            
            low[pos]=min(low[pos],dfn[v]);
        }
    }
}
int main(){
    memset(head,-1,sizeof(head));
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int u,v,w;
    for(int i=1;i<=n;i++){
        cin>>u>>v>>w;
        add(u,v,w);
        add(v,u,w);
    }
    for(int i=1;i<=n;i++)
        if(!dfn[i])
            tarjan(i,-1);
}