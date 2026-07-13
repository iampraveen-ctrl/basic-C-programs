#include<stdio.h>
enum day{
MON=11,TUE,WED=17,THU,FRI,SAT,SUN=13
};
int main(){
enum day today=WED;
switch(today){
case 11:
    printf("Today is monday");
    break;
case 12:
    printf("today is tuesday");
    break;
case 13:
    printf("today is wednesday");
    break;
case 14:
    printf("today is thursday");
    break;
case 15:
    printf("today is friday");
    break;
case 16:
    printf("today is saturday");
    break;
case 17:
    printf("today is sunday");
    break;
default:
    printf("Invalid");
}
}
