#include<bits/stdc++.h>
using namespace std;
const int maxn=550;
struct dinic{
    struct edge{
        int from,to,cap,flow;
    }tmp;
    bool book[maxn];
    vector<edge> mp[maxn];
    vector<edge> eg;
    int depth[maxn],cur[maxn],t,s,n;
    bool bfs(){
        for(int i=0;i<=n;i++)
            book[i]=0;
        queue<int> q;
        q.push(s);
        book[s]=1;
        depth[s]=0;
        while(!q.empty()){
            int t=q.front();
            q.pop();
            for(int i=0;i<mp[t].size();i++){
                edge &e=mp[t][i];
                if(!book[e.to]&&e.cap>e.flow){
                    depth[e.to]=depth[e.from]+1;
                    book[e.to]=1;
                    q.push(e.to);
                }
            }
        }
    }
    int dfs(int now,int flow){
        if(flow==0||now==t)
            return flow;
        for(int &i=cur[now];i<mp[now].size();i++){
            edge &e=mp[now][i];
            if(depth[e.to]==depth[e.from]+1&&e.cap>e.flow){
                int tmp=dfs(e.to,min(flow,e.cap-e.flow));
                if(tmp){
                    e.flow+=tmp;
                    mp[e.to][e].flow-=tmp;
                    return tmp;
                }
            }
        }
    }
    int dc(){
    }
    void addedge(int from,int to,int cap){
    }
    void init(int nn,int ss,int tt){
        s=ss;
        t=tt;
        n=nn;
        for(int i=1;i<=n;i++)
            mp[i].clear();
        eg.clear();
    }
}
int main(){

}