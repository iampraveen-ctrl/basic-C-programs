#include<stdio.h>
int main(){
int n,i=1;
printf("Enter the number:");
scanf("%d",&n);
print:
    printf("%d\n",i);
    i+=2;
    if(i<=n)
        goto print;
}

