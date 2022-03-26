#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=550;
const int inf=0x3f3f3f3f3f3f3f3f;
struct road{
   int cost,status;
   int from,to;
   bool operator<(const road& r)const{
      if(status==r.status)return cost<r.cost;
      return status>r.status;
   }
}l[maxn*maxn];
int f[maxn];
int find(int a){
   if(f[a]==a)return a;
   return f[a]=find(f[a]);
}
void merge(int a,int b){
   a=find(a);b=find(b);
   if(a==b)return;
   f[a]=b;
}
int calc(int n,int m,int pos){
   for(int i=1;i<=n;i++)
      f[i]=i;
   int ans=0;
   for(int i=1;i<=m;i++){
      if(l[i].from==pos||l[i].to==pos)
         continue;
      if(find(l[i].from)==find(l[i].to))
         continue;
      if(l[i].status==0)
         ans+=l[i].cost;
      merge(l[i].from,l[i].to);
   }
   set<int> s;
   for(int i=1;i<=n;i++)
      s.insert(find(i));
   if(s.size()>2)
      return inf;
   return ans;
}
signed main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m;
   cin>>n>>m;
   for(int i=1;i<=m;i++)
      cin>>l[i].from>>l[i].to>>l[i].cost>>l[i].status;
   sort(l+1,l+m+1);
   vector<int> ans;
   int aa=0;
   for(int i=1;i<=n;i++){
      int t=calc(n,m,i);
      if(t>aa){
         aa=t;
         ans.clear();
         ans.push_back(i);
      }
      else if(t==aa)ans.push_back(i);
   }
   if(aa==0)
      cout<<0;
   else 
      for(int i=0;i<ans.size();i++){
         cout<<ans[i];
         if(i!=ans.size()-1)
            cout<<" ";
      }
   cout<<endl;
}