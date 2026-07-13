#include<stdio.h>
int main(){
int n,fact=1;
printf("Enter the number:");
scanf("%d",&n);
print:
    fact*=n;
    n--;
    if(n>0)
        goto print;
printf("%d",fact);
}

