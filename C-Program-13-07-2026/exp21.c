#include<stdio.h>
#include<ctype.h>
int main(){
char a;
printf("Enter the character:");
scanf("%c",&a);
if(islower(a)){
    printf("It is lowercase");
}
else if(isupper(a)){
    printf("It is uppercase");
}
else{
    printf("not alphabet");
}
}

