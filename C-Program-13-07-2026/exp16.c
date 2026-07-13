#include<stdio.h>
int main(){
int n,i=1,r=0,sum=0;
printf("Enter the number:");
scanf("%d",&n);
print:
    r=n%10;
    if(r%2==0){
        sum+=r;
    }
    n=n/10;
    if(n>=1)
        goto print;
printf("%d",sum);
}


