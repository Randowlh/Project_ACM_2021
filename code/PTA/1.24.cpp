#include<bits/stdc++.h>
using namespace std;
struct egs{
    string name;
    int fee,from,to;
    bool operator<(const egs& other) const {
        if(fee==other.fee)
            return name>other.name;
        return fee<other.fee;
    }
}date[11000];
int fa[11000];
int find(int x){
    if(fa[x]!=x)
        fa[x]=find(fa[x]);
    return fa[x];
}
void merge(int a,int b){
    int x=find(a),y=find(b);
    if(x!=y)
        fa[x]=y;
}
bool cmp(int a,int b){
    if(date[a].name==date[b].name)
        return date[a].fee<date[b].fee;
    else return date[a].name<date[b].name;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>date[i].from>>date[i].to>>date[i].name>>date[i].fee;
    sort(date+1,date+1+m);
    for(int i=1;i<=n;i++)
        fa[i]=i;
    int ans=0;
    vector<int>aa;
    for(int i=1;i<=m;i++){
        int x=find(date[i].from),y=find(date[i].to);
        if(x!=y){
            aa.push_back(i);
            ans+=date[i].fee;
            merge(x,y);
        }
    }
    set<string> s;
    for(int i=0;i<aa.size();i++){
        s.insert(date[aa[i]].name);
    }
    cout<<s.size()<<' '<<ans<<endl;
    sort(aa.begin(), aa.end(),cmp);
    for(int i=0;i<aa.size();i++){
        cout<<date[aa[i]].from<<' '<<date[aa[i]].to<<' '<<date[aa[i]].name<<' '<<date[aa[i]].fee<<endl;
    }
}