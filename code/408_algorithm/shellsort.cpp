#include<bits/stdc++.h>
using namespace std;
const int maxn=510000;
int date[maxn],n;
void shell_sort(){
    for(int d=n/2;d>=1;d>>=1){
        for(int i=d+1;i<=n;i++){
            int pre=i-d;
            while(pre>=1&&date[pre]>date[i]){
                swap(date[pre],date[i]);
                i=pre;
                pre=i-d;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>date[i];
    shell_sort();
    for(int i=1;i<=n;i++)
        cout<<date[i]<<' ';
    cout<<endl;
}