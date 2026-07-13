#include<stdio.h>
#include<math.h>
int main(){
int n,i=1,e;
float res=1.0;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter the No.expo:");
scanf("%d",&e);
printf("value:\n");
print:
    res=res*n;
    printf("1/%.0f = %f\n",res,1/res);
    i+=1;
    if(i<=e)
        goto print;
}

