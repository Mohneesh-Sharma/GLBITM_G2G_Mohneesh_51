#include<stdio.h>

int main()
{
    int a,b;
    printf("enter numbers");
    scanf("%d%d",&a,&b);

    if (a==b){
        printf("numbers are equal");
    }
    else {
        printf("numbers are not equal");
    }
    return 0;
}