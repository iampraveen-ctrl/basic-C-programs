#include<stdio.h>
int main(){
int a,b,c;
printf("enter the three numbers:");
scanf("%d %d %d",&a,&b,&c);
switch(a>b&&a>c?1:(b>c?2:3)){
case 1:
    printf("%d is greatest",a);
    break;
case 2:
    printf("%d is greatest",b);
    break;
case 3:
    printf("%d is greatest",c);
    break;
default:
    printf("Invalid");
}
}
