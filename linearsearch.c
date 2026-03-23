//WAP to search an element in a array using Linear Search. 
#include <stdio.h>
int main() {
    int a[100],n,i,element,found=0,position;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("enter elements in the array  ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched : ");
    scanf("%d",&element);
    for(i=0;i<n;i++){
        if(a[i]==element){
            position=i;
            found=1;
            break;
        }
    }
    if(found==0)
    printf("element not found");
    else
    printf("element found at position  : %d",position+1);
    return 0;
}