#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%11==0&&a%32==0){
        printf("divisible");
    }
    else{
        printf("not");
    }
}
