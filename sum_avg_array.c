#include <stdio.h>
int main() {
    int n,a[100],i,sum=0;
    float avg;
    printf("enter number of terms  : ");
    scanf("%d",&n);
    printf("enter the elements of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("The sum of elements of array : %d\nThe average of the elements of array : %.4f",sum,avg);
    return 0;
}