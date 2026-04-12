//BINARY SEARCH
#include <stdio.h>

int main() {
    int i,n,a[10],low,high,mid,ele,f=-1;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("enter the elements  :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element needed to be searched : ");
    scanf("%d",&ele);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==ele){
            printf("element found at position : %d",mid+1);
            f=1;
            break;
        }
        else if(a[mid]<ele)
        low=mid+1;
        else
        high=mid-1;
    }
    if(f==-1)
    printf("element not present");
    return 0;
}