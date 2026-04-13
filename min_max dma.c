//MIN MAX USING DMA(POINTERS) FROM N INPUTTED NUMBERS
#include <stdio.h>
#include<stdlib.h>

int main() {
    int *ptr,n,max,min,i;
    printf("enter the number of integers to be entered  : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
    printf("*************not enough space*************");
    exit(0);
    }
    else{
        printf("enter the integers :\n");
        for(i=0;i<n;i++){
            scanf("%d",ptr+i);
        }
        max=*ptr;
        min=*ptr;
        for(i=1;i<n;i++){
            if(max<*(ptr+i))
            max=*(ptr+i);
            if(min>*(ptr+i))
            min=*(ptr+i);
        }
        printf("The MAXIMUM value = %d\nThe MINIMUN value = %d",max,min);
    }
    free(ptr);
    return 0;
}