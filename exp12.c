#include<stdio.h>
int main(){
int n,i=1,res=0,temp=0;
printf("Enter the number:");
scanf("%d",&n);
while(i<=n){
    temp=temp*10+9;
    res+=temp;
    i++;
}
printf("%d\t",res);
}





