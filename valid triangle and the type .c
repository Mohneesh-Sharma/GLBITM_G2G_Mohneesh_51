#include<stdio.h>

int main() {
    int a,b,c;
    printf("enter sides");
    scanf("%d%d%d",&a,&b,&c);

    if (a+b>c && a+c>b && b+c>a){
        if (a==b && a==c){
            printf("triangle is equilateral");
        }
        else if(a==b || b==c || a==c){
            printf("triangle is isosceles traingle");
        }
        else {
            printf("triangle is scalene traingle");

        }
    }
    else {
        printf("enter correctsides");
    }
    return 0;
}