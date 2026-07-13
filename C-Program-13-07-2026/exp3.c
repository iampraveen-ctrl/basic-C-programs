#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
switch(n%7){
case 0:
    printf("Divisible");
    break;
default:
    printf("not divisible");
}
}
