#include<stdio.h>
int main(){
int n,i,res=1,x;
printf("Enter the number:");
scanf("%d",&x);
printf("Enter the exponent:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    res=res*x;
    printf("%d\t",res);
}
}


