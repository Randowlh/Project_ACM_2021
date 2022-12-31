#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("11.txt","r",stdin);
    // freopen("23.txt","w",stdout);
    string tmp;
    int tot=0;
    int count=0;
    int cnt=0;
    while(cin>>tmp){
        // cout<<tmp<<endl;
        if(cnt==3){
            stringstream ss(tmp);
            // cout<<"tmp="<<tmp<<endl;
            count++;
            int tt;
            ss>>tt;
            tot+=tt;
        }
        cnt++;
        cnt%=6;
    }
    cout<<tot/count<<endl;
}