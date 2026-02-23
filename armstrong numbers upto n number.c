#include <stdio.h>
#include<math.h>

int main() {
    int i=0,n1,n2,d,n,number;
    printf("enter the limit upto which you want armstrong numbers");
    scanf("%d",&number);
    while(i<=number){
        int sum=0,count=0;
        //
        n=i;
        n1=n;
        while (n!=0){
            //
            count+=1;
             n=n/10;
        }
       n2=n1;
       while(n1!=0){
           //
           d=n1%10;
           sum=sum+pow(d,count);
           n1=n1/10;
        }
       if (sum==n2)
       printf("%d\n",n2);
       i+=1;
    }
    return 0;
}
