#include<stdio.h>
#include<ctype.h>
int main(){
char a;
printf("Enter the character:");
scanf("%c",&a);
if(isalpha(a)){
    printf("It is Alphabet");
}
else{
    printf("Not alphabet");
}
}
