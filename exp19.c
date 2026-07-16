#include<stdio.h>
int main()
{
    int n,i=1;
    float sum=0,res;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n){
        res=0;
        res=1/i;
        sum=sum+res;
        printf("1/%d\t",i);
        i++;
    }
    printf("\nSum:%f",sum);
}
