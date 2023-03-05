#include<bits/stdc++.h>
using namespace std;
int dfs(vector<int> arr){
    if(arr.size()==0)
        return 0;
    vector<int> dp,idx,dp2,idx2;
    for(int i=0;i<arr.size();i++){
        auto pos=lower_bound(dp.begin(),dp.end(),arr[i]);
        if(pos==dp.end()){
            idx.push_back(dp.size()-1);
            dp.push_back(arr[i]);
        }
    }
    for(int i=arr.size()-1;i>=0;i--){
        auto pos=lower_bound(dp2.begin(),dp2.end(),arr[i]);
        if(pos==dp2.end()){
            idx2.push_back(dp2.size()-1);
            dp2.push_back(arr[i]);
        }
    }
    vector<int> nxt;
    if(dp2.size()<dp.size()){
        int now=dp2.size();
        while()
    }
}
int main(){
    vector<int> v;
    int tmp;
    int n;
    while(cin>>n){
        if(n==0)
            break;
        v.clear();
        for(int i=1;i<=n;i++){
            cin>>tmp;
            v.push_back(tmp);
        }
        cout<<dfs(v)<<endl;
    }
    
}