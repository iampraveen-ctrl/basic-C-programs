#include<stdio.h>
int main(){
int b,h,r;
float a,c;
printf("Enter the hieght and breadth of the triangle:");
scanf("%d %d",&b,&h);
printf("enter the radius of the circle:");
scanf("%d",&r);
a=(0.5)*b*h;
printf("area of tri:%f",a);
c=2*3.14*r;
printf("the circum of circle:%f",c);
}
