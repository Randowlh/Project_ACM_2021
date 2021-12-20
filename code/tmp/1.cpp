#include<bits/stdc++.h>
using namespace std;
const int maxn=1100;
const int inf = 0x3f3f3f3f;
int mat[maxn][maxn];
int ans[maxn][maxn];
int dis[maxn];
int from[maxn];
int n;
int flag[maxn];
int prim(int s){
    for(int i=0;i<=n;i++)
        dis[i]=inf;
    dis[s]=0;
    int cnt=0;
    while(cnt<n){
        int u=0;
        for(int i=1;i<=n;i++)
            if(!flag[i]&&(!u||dis[i]<dis[u]))
                u=i;
        flag[u]=1;
        cnt++;
        for(int i=1;i<=n;i++)
            if(!flag[i]&&mat[u][i]<dis[i])
                dis[i]=mat[u][i],from[i]=u;
    }
    int aa=0;
    for(int i=1;i<=n;i++){
        if(from[i]==0)
            continue;
        aa+=dis[i];
        ans[i][from[i]]=ans[from[i]][i]=mat[from[i]][i];
    }
    return aa;
}
void gen(){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            mat[i][j]=mat[j][i]=rand()%100+1;
            if(i==j)
                ans[i][j]=mat[i][j]=0;
        }
}
void out(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<ans[i][j]<<' ';
        cout<<endl;
    }
}
int main(){
    n=10;
    memset(ans,-1,sizeof(ans));
    gen();
    cout<<"tot value:"<<prim(1)<<endl;
    out();
}