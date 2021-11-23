#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
struct node{
    int to,nxt,w;
}egs[maxn<<1];
int head[maxn];
int low[maxn],dfn[maxn],cnt,mcnt;
int ecnt=0;
int ctt[maxn];
void add(int u,int v,int w){
    ++ecnt;
    egs[ecnt].to=v;
    egs[ecnt].nxt=head[u];
    egs[ecnt].w=w;
    head[u]=ecnt;
}
int ans=1e9+10;
stack<int>st;
void tarjan(int pos,int fa,int w){
    int now=++mcnt;
    dfn[pos]=low[pos]=++cnt;
    for(int i=head[pos];i;i=egs[i].nxt){
        int to=egs[i].to;
        if(to==fa)
            continue;
        if(!dfn[to]){
            tarjan(to,pos,egs[i].w);
            low[pos]=min(low[pos],low[to]);
        }else{ 
            ans=min(ans,egs[i].w);
            mcnt++;
            low[pos]=min(low[pos],dfn[to]);
        }
    }
    int dis=mcnt-now;
    if(low[pos]!=dfn[pos]||dis%2==0)
        ans=min(ans,w);
}
int main(){
    int n,m;
    cin>>n>>m;
    int u,v,w;
    int tot=0;
    for(int i=1;i<=m;i++){
        cin>>u>>v>>w;
        add(u,v,w);
        add(v,u,w);
        tot+=w;
    }
    for(int i=1;i<=n;i++)
        if(!dfn[i])
            tarjan(i,i,ans);
    if(m%2==0){
        cout<<tot<<endl;
    }else 
    cout<<tot-ans<<endl;
    // cout<<"ans="<<ans<<endl;
}

