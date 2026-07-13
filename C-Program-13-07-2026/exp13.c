#include<stdio.h>
int main(){
int n,i=1,sum=0;
printf("Enter the number:");
scanf("%d",&n);
print:
    sum+=i;
    i+=1;
    if(i<=n)
        goto print;
printf("%d",sum);
}

