#include<bits/stdc++.h>
using namespace std;
struct node{
    vector<int> need,maxed;
    int id;
    int flag=0;
    bool operator<(const node a){
        int sum=0;
        for(int i=0;i<need.size();i++)
            sum+=need[i];
        int sum1=0;
        for(int i=0;i<a.need.size();i++)
            sum1+=a.need[i];
        return sum<sum1;
    }
};
vector<node> v;
vector<int> available;
bool check(int pos){
    for(int i=0;i<v[pos].need.size();i++)
        if(v[pos].need[i]>available[i])
            return false;
    for(int i=0;i<v[pos].maxed.size();i++)
        available[i]+=v[pos].maxed[i]-v[pos].need[i];
    return true;
}
int main(){
    int m,n;
    cin>>m>>n;
    int tmp;
    for(int i=1;i<=n;i++){
        node in;
        in.id=i-1;
        in.flag=0;
        for(int j=0;j<m;j++){
            cin>>tmp;
            in.maxed.push_back(tmp);
        }
        v.push_back(in);
    }
    for(int i=1;i<=n;i++)
        for(int j=0;j<m;j++){
            cin>>tmp;
            v[i-1].need.push_back(v[i-1].maxed[j]-tmp);
        }
    for(int j=0;j<m;j++){
        cin>>tmp;
        available.push_back(tmp);
    }
    vector<int> ans;
    int fst;
    cin>>fst;
    int tt[1100];
    int ff=0;
    for(int i=0;i<m;i++){
        cin>>tt[i];
        if(available[i]<tt[i])
            ff=1;
    }
    if(!ff){
        for(int i=0;i<m;i++){
            available[i]-=tt[i];
            v[fst].need[i]-=tt[i];
        }
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++){
        if(check(i-1)){
            ans.push_back(v[i-1].id);
            v[i-1].flag=1;
        }else break;
    }
    if(ans.size()==n){
        cout<<"safe"<<endl;
        for(int i=0;i<ans.size();i++)
            printf("P%02d\n",ans[i]);
    }else cout<<"unsafe"<<endl;
}