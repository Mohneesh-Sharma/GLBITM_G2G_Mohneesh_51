#include <stdio.h>

int main() {
    int n,rem,n1=0;
    printf("enter the number    : ");
    scanf("%d",&n);
    while (n!=0){
        rem=n%10;
        n1=n1*10+rem; //or directly use printf("%d",rem);
        n=n/10;
    }
    printf(" reverse of the number is    :  %d",n1);
    return 0;
}