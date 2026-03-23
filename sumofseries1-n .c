//Program to print the sum of series of 1+1/1+1/2+1/3+----+1/n
#include <stdio.h>
int main() {
    int n,i;
    float s=1;
    printf("enter number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+1.0/i;
    }
    printf(" The sum : %f",s);
    return 0;
}
