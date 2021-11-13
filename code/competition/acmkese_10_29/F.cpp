#include<bits/stdc++.h>
using namespace std;
#define ll long long;
struct tim{
    int h,m,s,dbs;
    tim(int a,int b,int c,int d):h(a),m(b),s(c),dbs(d){}
};
inline tim read(string in){
    for(int i=0;i<in.length();i++){
        if(in[i]==',')
            in[i]=' ';
        if(in[i]==':')
            in[i]=' ';
    }
    tim ans(0,0,0,0);
    stringstream ss(in);
    char tmp;
    ss>>ans.h;
    ss>>ans.m;
    ss>>ans.s;
    ss>>ans.dbs;
    // cout<<"iiiiiiin="<<in<<endl;
    // cout<<"ans="<<ans.h<<":"<<ans.m<<":"<<ans.s<<endl;
    return ans; 
}
void pr(tim a){
    // return;
    //cout输出时间
    //输出格式为：hh:mm:ss,xxx
    if(a.h<10)
        cout<<"0";
    cout<<(int)a.h<<":";
    if(a.m<10)
        cout<<"0";
    cout<<(int)a.m<<":";
    if(a.s<10)
        cout<<"0";
    cout<<(int)a.s<<",";
    if(a.dbs<10)
        cout<<"00";
    else if(a.dbs<100)
        cout<<"0";
    cout<<a.dbs;
}
tim add(tim a,tim b){
    tim ans(0,0,0,0);
    ans.dbs=a.dbs+b.dbs;
    ans.s=a.s+b.s+ans.dbs/1000;
    ans.dbs=ans.dbs%1000;
    ans.m=a.m+b.m+ans.s/60;
    ans.s-=((int)ans.s)/60*60;
    ans.h=a.h+b.h+ans.m/60;
    ans.m-=((int)ans.m)/60*60;
    // cout<<"ans="<<ans.h<<":"<<ans.m<<":"<<fixed<<setprecision(3)<<ans.s<<endl;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int tt,tt2;
    char ttt;
    cin>>tt>>ttt>>tt2;
    tim jia(0,0,tt,tt2);
    string tmp;
    getline(cin,tmp);
    for(int i=1;i<=n;i++){
        string in;
        cin>>in;
        cout<<in<<endl;
        cin>>in;
        // cout<<"in="<<in<<endl;
        pr(add(read(in),jia));
        cin>>in;
        cout<<" --> ";
        cin>>in;
        // cout<<"in2="<<in<<endl;
        pr(add(read(in),jia));
        getline(cin,in);
        cout<<in<<endl;
        getline(cin,in);
        if(!in.empty())
            cout<<in<<endl;
        getline(cin,in);
        if(!in.empty())
            cout<<in<<endl;
        cout<<endl;
    }
}