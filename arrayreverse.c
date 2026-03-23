//Program to print the reverse of an array
#include <stdio.h>
int main() {
    int n,a[100],i;
    printf("enter number of terms  : ");
    scanf("%d",&n);
    printf("enter the elements of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The reversed array :\n");
    for(i=n-1;i>=0;i--)
    printf("%d\n",a[i]);
    return 0;
}
