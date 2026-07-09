#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    x=a>b?(a>c?a:c):(b>c?b:c);
    printf("the greatest:%d",x);
}
