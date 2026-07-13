#include<stdio.h>
int main(){
int n;
char x;
printf("enter the number");
scanf("%d",&n);
x=((n%5==0)&&(n%7==0))?printf("divisible by both"):((n%5==0)?printf("div by 5"):((n%7==0)?printf("div by 7"):printf("none")));
printf("%c",x);
}
