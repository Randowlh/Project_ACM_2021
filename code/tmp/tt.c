#include<stdio.h>
int main(){
    int t =0;
    int cdd=0;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        cdd=0;
        int n;
        scanf("%d",&n);
        int data[1100];
        int cnt=0;
        for(int i=0;i<n;i++){
            scanf("%d",&data[i]);
            if(data[i]==2)
                cnt++;
        }
        if(cnt%2==1)
        {
            printf("-1\n");
            continue;
        }
        int sdd=cnt/2;
        for(int i=0;i<n;i++)
        {
            
         if(data[i]==2)
            cdd++;
            if(cdd==sdd){
             printf(
                "%d\n",i+1
             );
             break;
            }
        }
    }
    
}
