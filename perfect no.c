//TO CHECK FOR NUMBER IS PERFECT OR NOT
#include <stdio.h>

int main() {
    int i,f=0,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0)
        f+=i;
    }
    if(f==n)
    printf("Number is perfect");
    else
    printf("Number is not perfect");
    return 0;
}