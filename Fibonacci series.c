// fibonacci series
#include <stdio.h>

int main() {
    int a=0,b=1,c,i,n;
    printf("enter the no. of digits you want in your series   ");
    scanf("%d",&n);
    if(n==0)
    printf("invalid");
    else if (n==1)
    printf("%d",a);
    else {
        printf("%d\n%d",a,b);
        for(i=3;i<=n;i++){
            c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
         }
    }
    return 0;  
}