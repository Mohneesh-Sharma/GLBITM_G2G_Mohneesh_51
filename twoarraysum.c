// WAP that inputs two arrays and saves sum of corresponding elements of these arrays in a third array and print them
#include <stdio.h>
int main() {
    int a[10],b[10],c[10],n,i,s=0;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("enter elements in first array  ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter elements in second array  ");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i]+b[i];
    }
    printf("The array with the corresponding sum of elements  \n");
    for(i=0;i<n;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}