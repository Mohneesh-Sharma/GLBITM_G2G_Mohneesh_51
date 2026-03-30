//Program for basic array operations
#include <stdio.h>
int main() {
    int n,a[100],i,sum_even=0,sum_odd=0;
    printf("enter number of terms  : ");
    scanf("%d",&n);
    printf("enter the elements of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            sum_even+=a[i];
        }
        else{
            sum_odd+=a[i];
        }
    }
    printf("The sum of even elements : %d\nThe sum of odd elements : %d",sum_even,sum_odd);
    return 0;
}