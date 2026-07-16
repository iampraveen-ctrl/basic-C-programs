#include<stdio.h>
int main(){
    int n,i,dig,temp,res=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        dig=temp%10;
        res=(res*10)+dig;
        temp/=10;
    }
    printf("%d",res);
}
