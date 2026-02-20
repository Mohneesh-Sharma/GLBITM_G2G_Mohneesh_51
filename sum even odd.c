#include <stdio.h>
int main() {
    int i , n, sum_e=0,sum_o=0;
    printf("enter the number : ");
    scanf("%d",&n);
        for(i=1;i<=n;i++){
            if(i%2==0)
            sum_e+=i;
            else
            sum_o+=i;
        }
    printf("sum of even numbers  :  %d\nsum of odd numbers  :  %d",sum_e,sum_o);
    return 0;
}