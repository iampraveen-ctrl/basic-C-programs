#include<stdio.h>
int main(){
    int n,i=2,pri=0,j,m;
    printf("Enter the start range:");
    scanf("%d",&n);
    printf("Enter the end range:");
    scanf("%d",&m);
    for(j=n;j<=m;j++){
        pri=0;
        i=2;
        while(i<j){
            if(j%i==0){
                pri=1;
                break;
            }
            i++;
        }
        if(pri==0){
            printf("%d\n",j);
        }
    }
}
