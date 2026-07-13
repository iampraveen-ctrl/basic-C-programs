#include<stdio.h>
int main(){
int n,i=1,m;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter the multiple:");
scanf("%d",&m);
printf("Table:\n");
print:
    printf("%d * %d = %d\n",i,n,i*n);
    i+=1;
    if(i<=m)
        goto print;
}


