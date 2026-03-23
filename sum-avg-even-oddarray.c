//Program for basic array operations
#include <stdio.h>
int main() {
    int n,a[100],i,sum=0,count_even=0,count_odd=0,sum_even=0,sum_odd=0;
    float avg;
    printf("enter number of terms  : ");
    scanf("%d",&n);
    printf("enter the elements of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(a[i]%2==0){
            count_even+=1;
            sum_even+=a[i];
        }
        else{
            count_odd+=1;
            sum_odd+=a[i];
        }
    }
    avg=(float)sum/n;
    printf("The sum of elements of array : %d\nThe average of the elements of array : %.4f\nThe number of even elements : %d\nThe number of odd elements : %d\nThe sum of even elements : %d\nThe sum of odd elements : %d\n",sum,avg,count_even,count_odd,sum_even,sum_odd);
    return 0;
}
