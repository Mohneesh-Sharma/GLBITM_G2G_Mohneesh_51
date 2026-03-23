// to print the sum of elements of an array
#include <stdio.h>
int main() {
    int a[100],n,i,s=0;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    
    printf("the sum of elements is : %d",s);
    return 0;
}