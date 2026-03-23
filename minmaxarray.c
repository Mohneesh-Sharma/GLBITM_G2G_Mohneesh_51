//WAP to find the minimum and maximum element of the array
#include <stdio.h>
int main() {
    int a[10],n,max,min,i;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("enter elements in the array  ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("maximum element : %d\nThe minimum element : %d",max,min);
    return 0;
}