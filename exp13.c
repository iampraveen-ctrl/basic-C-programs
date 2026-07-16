#include<stdio.h>
int main(){
int n,i=1,res=0,sum=0;
printf("Enter the number:");
scanf("%d",&n);
while(i<=n){
    res=i*i;
    printf("%d\t",res);
    sum+=res;
    i++;
}
printf("\n%d",sum);
}



