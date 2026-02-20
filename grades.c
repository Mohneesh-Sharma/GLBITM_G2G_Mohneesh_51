#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    float p;
    printf("enter the marks ot the subjects :  ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=a+b+c+d+e;
    p=f/5.0;
    if (p<=100 && p>90)
    printf("grade A");
    else if(p<=90 && p>80)
    printf("grade B");
    else if(p<=80 && p>60)
    printf("grade C");
    else 
    printf("garde D");
    return 0;
}