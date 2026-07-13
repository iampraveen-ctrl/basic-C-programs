#include<stdio.h>
int main(){
char c;
printf("enter the character:");
scanf("%c",&c);
switch(c){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    printf("it is vowel");
    break;
default:
    printf("it is a constant");
}
}
