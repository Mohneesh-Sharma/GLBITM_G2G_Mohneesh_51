#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    float p;
    printf("enter the marks ot the subjects :  ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=a+b+c+d+e;
    p=f/5.0;
    printf("the sum of the marks of the subjects obtained are : %d\n the percentage obtained : %.3f",f,p);

    return 0;
}