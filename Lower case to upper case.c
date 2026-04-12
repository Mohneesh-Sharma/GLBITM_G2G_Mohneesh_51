//TO CONVERT THE LOWER CASE INTO UPPER CASE AND VICE-VERSA
#include <stdio.h>

int main() {
    char c;
    printf("enter your character");
    scanf("%c",&c);
    if(c>=65&&c<=90)
    printf("%c",c+32);
    else if(c>=97&&c<=122)
    printf("%c",c-32);
    return 0;
}