#include<stdio.h>
int main(){
int n,i,res=1,dig,sum=0,temp,c=0;
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(temp>0){
    temp/=10;
    c++;
}
temp=n;
 while(temp>0){
    dig=temp%10;
    res=1;
    i=1;
    while(i<=c){
        res=res*dig;
        i++;
    }
    sum+=res;
    temp=temp/10;
}
if(sum==n){
    printf("Armstrong");
}else{
    printf("not");
}
}





