#include<stdio.h>
 int main(){
    float rad,area,cir;
    printf("enter the radius of the circle");
    scanf("%f",&rad);
    area=3.14*rad*rad;
    cir=2*3.14*rad;
    printf("the area of the circle having radius-%.2f  is %.2f\nAnd circumference = %.2f");
 }
