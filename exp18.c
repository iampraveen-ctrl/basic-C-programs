#include<stdio.h>
int main(){
    int n,x,res=1,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum+=res;
        res=res*x;
    }
    printf("%d",sum);
}
