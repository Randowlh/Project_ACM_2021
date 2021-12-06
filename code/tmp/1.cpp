#include<bits/stdc++.h>
using namespace std;

int main(){
    cin>>n;
    int maxx = 0;
    rep(k,1,n){
        if(2+(k+1)*(n-2)==2*k*(n-1)&&2*k*(n-1)==(k+1)*(n-1)){
            maxx = max(maxx,2*k*(n-1));
        }   
    }
    cout<<maxx<<endl;
}