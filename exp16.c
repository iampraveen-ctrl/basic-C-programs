#include<stdio.h>
int main(){
    int i,j,n,a=0,b=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",a);
        j=a+b;
        a=b;
        b=j;
    }
}
