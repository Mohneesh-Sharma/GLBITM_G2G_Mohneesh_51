#include <stdio.h>
int main() {
    int i , n, s=1;
    printf("enter the number of which you want the factorial : ");
    scanf("%d",&n);
    if(n!=0){
        for(i=1;i<=n;i++)
        s=s*i;
    }
    printf("factorial   : %d",s);
    return 0;
}