#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swaped numbers are now\n first- %d  and second-  %d ",a,b);
}