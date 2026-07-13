#include<stdio.h>
#include<math.h>
int main(){
int n,i=1,e,res=1;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter the No.expo:");
scanf("%d",&e);
printf("value:\n");
print:
    res=res*n;
    printf("%d ** %d = %d\n",n,i,res);
    i+=1;
    if(i<=e)
        goto print;
}


