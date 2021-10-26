# 1 "1stl.cpp"
#include <bits/stdc++.h>
using namespace std;
typedef struct _pcb
{
    long pid;
    char name[20];
    int strategy;
    int priority;
    int *stack;
    bool operator<(_pcb a){
        if(priority==a.priority)
            return pid<a.pid;
        else return priority<a.priority;
    }
} pcb_t, *ppcb_t;
_pcb read(){
    _pcb ans;
    cin>>ans.pid>>ans.name>>ans.strategy>>ans.priority;
    return ans;
}
list<_pcb> li;
void out(){
    for(auto i:li)
        cout<<i.pid<<endl;
}
int pid;
inline bool ck(_pcb a){
    return a.pid==pid;
}
int main()
{
    for(int i=1;i<=10;i++)
        li.push_back(read());
    string opt;
    while(cin>>opt){
        if(opt=="sort"){
            li.sort();
            out();
        }else if(opt=="append"){
            li.push_back(read());
            out();
        }else if(opt=="modify"){
            int a,b;
            cin>>a>>b;
            for(auto i:li)
                if(i.pid==a)
                    i.strategy=b;
            cout<<a<<endl<<b<<endl;
        }else if(opt=="delete"){
            cin>>pid;
            li.remove_if(ck);
            out();
        }else if(opt=="insert"){
            cin>>pid;
            for(auto i=li.begin();i!=li.end();i++){
                if(i->pid==pid){
                    i++;
                    if(i==li.end())
                        li.push_back(read());
                    else li.insert(i,read());
                    break;
                }
            }
            out();
        }else if(opt=="find"){
            cin>>pid;
            for(auto i:li)
                if(i.pid==pid){
                    cout<<pid<<endl<<i.priority<<endl;
                    break;
                }
        }
    }

}
