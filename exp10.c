#include<stdio.h>
int main(){
int n,i=2,pri=0;
printf("Enter the number:");
scanf("%d",&n);
while(i<n){
    if(n%i==0){
        pri=1;
        break;
    }
    i++;
    }
    if(pri==0){
        printf("It is prime");
    }else{
        printf("It is not prime");
    }

}






