#include<bits/stdc++.h>
using namespace std;
vector<int> tim;
void to_lowercase(string &in){
    for(int i=0;i<in.size();i++){
        if(in[i]>='A'&&in[i]<='Z'){
            in[i]+=32;
        }
    }
}
int main(){
    string opt;
    cin>>opt;
    cout<<opt<<endl;
    to_lowercase(opt);
    
    int n,tmp;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        tim.push_back(tmp);
    }
    if(opt=="fcfs"){
        queue<pair<int,int>> q;
        for(int i=0;i<tim.size();i++)
            q.push(make_pair(tim[i],i));
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            printf("P%02d\n",p.second);
            p.first-=2;
            if(p.first>0)
                q.push(p);
        }
    }else{
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        for(int i=0;i<tim.size();i++)
            q.push(make_pair(tim[i],i));
        pair<int,int> tmp={-1,-1};
        while(!q.empty()){
            pair<int,int> p=q.top();
            q.pop();
            if(tmp.first!=-1){
                q.push(tmp);
                tmp={-1,-1};
            }
            printf("P%02d\n",p.second);
            p.first-=2;
            if(p.first>0)
                tmp=p;
        }
        while(tmp.second!=-1){
            printf("P%02d\n",tmp.second);
            tmp.first-=2;
            if(tmp.first<=0)
                break;
        }
    }
}