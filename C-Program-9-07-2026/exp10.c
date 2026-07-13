#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>99&&n<1000){
        printf("three digit");
    }
    else{
        printf("not three");
    }
}
