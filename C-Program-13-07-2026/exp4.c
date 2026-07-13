#include<stdio.h>
int main(){
int n,l,b;
printf("1.Area of square\n2.area of circle\n3.area of rectangle\n4.area of triangle\n");
printf("enter the choice of calculation:\n");
scanf("%d",&n);
switch(n){
case 1:
    printf("enter the length:");
    scanf("%d",&l);
    printf("Area of square:%d",4*l);
    break;
case 2:
    printf("enter the radius:");
    scanf("%d",&l);
    printf("Area of circle:%f",3.14*l*l);
    break;
case 3:
    printf("enter the length and breadth:");
    scanf("%d %d",&l,&b);
    printf("Area of rectangle:%d",l*b);
    break;
case 4:
    printf("enter the length and height:");
    scanf("%d %d",&l,&b);
    printf("Area of triangle:%f",0.5*l*b);
    break;
default:
    printf("Invalid choice");
}
}
