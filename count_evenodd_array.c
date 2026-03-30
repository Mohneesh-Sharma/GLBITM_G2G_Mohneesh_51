//Program for basic array operations
#include <stdio.h>
int main() {
    int n,a[100],i,count_even=0,count_odd=0;
    printf("enter number of terms  : ");
    scanf("%d",&n);
    printf("enter the elements of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            count_even+=1;
        }
        else{
            count_odd+=1;
        }
    }
    printf("The number of even elements : %d\nThe number of odd elements : %d",count_even,count_odd);
    return 0;
}