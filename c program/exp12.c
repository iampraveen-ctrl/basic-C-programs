#include<stdio.h>
int main(){
int a;
printf("enter the unit:");
scanf("%d",&a);
if(a<=200){
    printf("RS.:%d",a*3);
}
else if(a>=201&&a<=500){
    printf("RS:%d",a*4);
}
else if(a>=501&&a<=1000){
    printf("RS:%d",a*8);
}
else{
    printf("RS:%d",a*10);
}
}
