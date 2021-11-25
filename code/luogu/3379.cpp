#include<bits/stdc++.h>
using namespace std;
const int maxn=510000;
const int lmaxn=log2(maxn)+3;
vector<int> mp[maxn];
int fa[maxn][lmaxn];
int n,m,s;
int dep[maxn];
void dfs(int pos,int f){
    fa[pos][0]=f;
    for(int i:mp[pos]){
        if(i==f)continue;
        dep[i]=dep[pos]+1;
        dfs(i,pos);
    }
}
void init(int n){
    for(int i=1;i<=log2(n)+1;i++)
        for(int j=1;j<=n;j++)
            fa[j][i]=fa[fa[j][i-1]][i-1];
}
int getlca(int u,int v){
    if(dep[u]<dep[v])swap(u,v);
    for(int i=log2(n)+1;i>=0;i--)
        if(dep[fa[u][i]]>=dep[v])u=fa[u][i];
    if(u==v)return u;
    for(int i=log2(n)+1;i>=0;i--)
        if(fa[u][i]!=fa[v][i]){
            u=fa[u][i];
            v=fa[v][i];
        }
    return fa[u][0];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);   
    cout.tie(0);
    cin>>n>>m>>s;
    int u,v;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    dep[s]=1;
    dfs(s,s);
    init(n);
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        cout<<getlca(u,v)<<"\n";
    }
}