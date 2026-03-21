//Program to print the table
#include <stdio.h>
int main() {
    int n,i,a;
    printf("enter number    = ");
    scanf("%d",&a);
    printf("enter number of terms for table    = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d*%d=%d\n",a,i,a*i);
    }
    return 0;
}
