#include<bits/stdc++.h>
using namespace std;
const int maxn=110000;
int fa[maxn];
int dep[maxn];
int find(int x){int now=x; while(fa[now]^now)now=fa[now];return now;}
void merge(int a,int b){
    int l=find(a),r=find(b);
    if(l==r) return;
    if(dep[l]>dep[r])swap(l,r);
    fa[l]=r;
    dep[r]+=dep[l]==dep[r];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=m;i++){
        int opt,a,b;
        cin>>opt>>a>>b;
        if(opt==1)
            merge(a,b);
        else if(find(a)==find(b))
            cout<<"Y"<<'\n';
        else cout<<"N"<<'\n';
    }
}