#include <stdio.h>
int main() {
    float a,b;
    char d;
    printf("enter the numbers for performing the operation :  ");
    scanf("%f %f",&a,&b);
    printf("enter the operation you want to perform   ");
    scanf(" %c",&d);
    switch(d){
        case '+':
        printf("%f",a+b);
        break;
        case '-':
        printf("%f",a-b);
        break;
        case '*':
        printf("%f",a*b);
        break;
        case '/':
        printf("%f",a/b);
        break;
        default :
        printf("enter valid operator");
        break;
    }
    return 0;
}