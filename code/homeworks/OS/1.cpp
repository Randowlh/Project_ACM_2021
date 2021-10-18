#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
struct _pcb
{
    long pid;
    char name[20];
    int strategy; // 控制策略 
    int priority; // 优先级 
    int *stack; // 栈指针 
    struct _pcb *next;
    bool operator<(_pcb a){
        if(priority==a.priority){
            return pid<a.pid;
        }else return priority<a.priority;
    }
} pcb_t, *ppcb_t;
inline void read(){
    cin>>pcb_t.pid>>pcb_t.name>>pcb_t.strategy>>pcb_t.priority;
    pcb_t.next=NULL;
}
void push(){
    if(ppcb_t==NULL){
        auto tt=new _pcb;
        *tt=pcb_t;
        ppcb_t=tt;
        return;
    }
    auto tt=ppcb_t;
    while(tt->next!=NULL)
        tt=tt->next;
    auto tmp=new _pcb;
    *tmp=pcb_t;
    tt->next=tmp;
}
void output(){
    auto now=ppcb_t;
    while(now!=NULL){
        cout<<now->pid<<' '<<now->name<<' '<<now->strategy<<' '<<now->priority<<endl;
        now=now->next;
    }
}
void del(int pid){
    auto now=&ppcb_t;
    while(*now!=NULL){
        if((*now)->pid==pid){
            auto tt=*now;
            (*now)=(*now)->next;
            delete(*now);
            return;
        }
        now=&(*now)->next;
    }
}
void insert(int pid){

}
void _sort(){
    vector<_pcb> v;
    while(ppcb_t!=NULL){
        auto tt=ppcb_t;
        ppcb_t=ppcb_t->next;
        v.push_back(*tt);
        delete tt;
    }
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        pcb_t=v[i];
        push();
    }
}
void modify(int pid,int num){
    auto now=ppcb_t;
    while(now!=NULL){
        if(now->pid==pid){
            now->priority=num;
            return;
        }
    }
}

int main()
{
    pcb_t.next=NULL;
    for(int i=1;i<=10;i++){
        read();push();
    }
    string opt;
    output();
    while(cin>>opt){
        if(opt=="sort"){
            _sort();
            output();
        }
        else if(opt=="append"){
            read();
            push();
            output();
        }else if(opt=="modify"){
            int pid,num;
            cin>>pid>>num;
            modify(pid,num);
            cout<<pid<<endl<<num<<endl;
        }else if(opt=="delete"){
            int pid;
            cin>>pid;
            del(pid);
            output();
        }else if(opt=="insert"){
            int pid;
            cin>>pid;
            read();
            insert(pid);
            pcb_t.next=NULL;
        }
        
    }
}