#include<stdio.h>
#include<ctype.h>
int main(){
char a;
printf("Enter the character:");
scanf("%c",&a);
if(isalpha(a)){
    printf("It is alphabet");
}
else if(isdigit(a)){
    printf("It is digit");
}
else{
    printf("special character");
}
}

