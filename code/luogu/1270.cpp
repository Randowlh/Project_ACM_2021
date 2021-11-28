#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+5;
struct node{
    int w,to,nxt;
}egs[maxn<<2];
int ecnt;
int head[maxn];
void add(int u,int v,int w){
    egs[++ecnt]=(node){w,v,head[u]};
    head[u]=ecnt;
}
int dp[610][maxn];
int tot[maxn];
int cnt=0,tim;
int cc[maxn];
int fa[maxn],val[maxn];
void dfs(int pos){
    if(!head[pos]){
        for(int i=0;i<=val[pos];i++)
            dp[i*5][pos]=i;
        tot[pos]=val[pos]*5;
        return;
    }
    tot[pos]=0;
    for(int now=head[pos];now;now=egs[now].nxt){
        int to=egs[now].to;
        int w=egs[now].w;
        dfs(to);
        for(int i=0;i<=tot[pos];i++)
            for(int j=0;j<=tot[to];j++)
                dp[i+j+w][pos]=max(dp[i+j+w][pos],dp[i][pos]+dp[j][to]);
        tot[pos]=min(tim,tot[pos]+tot[to]+w);
    }
}
int main(){
    cin>>tim;
    int now=0;
    int w,opt;
    while(cin>>w>>opt){
        fa[++cnt]=now;
        add(now,cnt,w);
        cc[now]++;
        now=cnt;
        if(opt==0){
            continue;
        }else{ 
            val[now]=opt;
            now=fa[now];
            while(cc[now]==2)
                now=fa[now];
        }
    }
    dfs(1);
    int ans=0;
    for(int i=1;i<=tim;i++)
        ans=max(ans,dp[1][i]);   
    cout<<ans<<endl;
}