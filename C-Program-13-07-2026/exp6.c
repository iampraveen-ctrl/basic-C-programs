#include<stdio.h>
int main(){
int n;
printf("Enter the unit:");
scanf("%d",&n);
switch(n>0&&n<=200?1:(n<=300?2:(n<=500?3:4))){
case 1:
    printf("Rupees per unit is 3\nvalue:%d",n*3);
    break;
case 2:
    printf("Rupees per unit is 4\nvalue:%d",n*4);
    break;
case 3:
    printf("Rupees per unit is 3\nvalue:%d",n*8);
    break;
case 4:
    printf("Rupees per unit is 10\nvalue:%d",n*10);
    break;
default:
    printf("Invalid");
}
}

