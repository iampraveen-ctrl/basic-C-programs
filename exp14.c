#include<stdio.h>
int main(){
int n,i,res=1,dig,sum=0,temp,c=0,j,m;
printf("Enter the range start:");
scanf("%d",&n);
printf("enter the range end:");
scanf("%d",&m);
for(i=n;i<=m;i++){
    c=0;
    sum=0;
    temp=i;
    while(temp>0){
        temp/=10;
        c++;
    }
    temp=i;
    while(temp>0){
        dig=temp%10;
        res=1;
        j=1;
        while(j<=c){
            res=res*dig;
            j++;
        }
        sum+=res;
        temp=temp/10;
    }
    if(sum==i){
        printf("%d\n",i);
    }
}
}






