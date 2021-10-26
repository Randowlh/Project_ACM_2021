#include<bits/stdc++.h>
using namespace std;
list<int> s;
struct List{
    int num;
    List* nxt;
    List(int a=0,List* b=NULL){num=a,nxt=b;}
}*head;
void push(int x){
    if(head==NULL)
        head=new List(x);
    else{
        auto now=head;
        while(now->nxt!=NULL)
            now=now->nxt;
        now->nxt=new List(x);
    }
}
void inst(int pos,int x){
    if(head==NULL)
        return;
    auto now=head;
    while(now!=NULL&&now->num!=pos)
        now=now->nxt;
    if(now==NULL)
        return;
    auto tmp=now->nxt;
    now->nxt=new List(x,tmp);
    return;
}
void del(int pos){
    if(head==NULL)
        return;
}
void output(){
    auto now=head;
    while(now!=NULL){
        cout<<now->num<<' ';
        now=now->nxt;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int tmp;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        push(tmp);
    }
    output();
    int m;
    cin>>m;
    int a,b;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        cout<<a<<' '<<b<<endl;
        inst(a,b);
        output();
    }
}