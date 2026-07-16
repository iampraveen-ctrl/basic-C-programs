#include<stdio.h>
int main(){
int n,res=0;
printf("Enter the number:");
scanf("%d",&n);
while(n>0){
    res+=n%10;
    n/=10;
}
printf("%d\t",res);
}




