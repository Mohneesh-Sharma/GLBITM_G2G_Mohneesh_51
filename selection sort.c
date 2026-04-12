//SELECTION SORT
#include <stdio.h>

int main() {
    int n,a[10],temp,j,i,min;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("enter the elements  :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=1+i;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("sorted array :\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}