#include<stdio.h>
int main(){
int n,i,x;
float res=1.0;
printf("Enter the number:");
scanf("%d",&x);
printf("Enter the exponent:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    res=res*x;
    printf("1/%.0f =%f\n",res,1/res);
}
}



