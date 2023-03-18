#include<bits/stdc++.h>
using namespace std;
int date[1100];
char tmp;
int main(){
int i=0;
while(!i||cin>>tmp)
    cin>>date[i++];
for(int j=0;j<i;j++)
cout<<date[j]<<endl;
}