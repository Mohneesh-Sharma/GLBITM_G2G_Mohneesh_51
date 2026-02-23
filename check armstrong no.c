#include <stdio.h>
#include<math.h>

int main() {
    int n,n1,n2,d,sum=0,count=0;
    printf("enter the number    : ");
    scanf("%d",&n);
    n1=n;
    while (n!=0){
        count+=1;
        n=n/10;
    }
    n2=n1;
    while(n1!=0){
        d=n1%10;
        sum=sum+pow(d,count);
        n1=n1/10;
    }
    if (sum==n2)
    printf("number is armstrong");
    else
    printf("number is not armstrong");

    return 0;
}