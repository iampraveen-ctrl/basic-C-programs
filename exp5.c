#include<stdio.h>
int main(){
int n,i,m;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter the multiplicant:");
scanf("%d",&m);
printf("Table:\n");
for(i=1;i<=m;i++){
    printf("%d * %d = %d\n",i,n,i*n);
}
}


