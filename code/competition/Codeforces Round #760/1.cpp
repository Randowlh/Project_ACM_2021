#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int b[7];
        for(int j=0;j<7;j++)
            scanf("%d",&b[j]);
        printf("%d %d %d\n",b[0],b[1],b[6]-b[0]-b[1]);
    }
}