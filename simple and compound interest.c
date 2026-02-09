#include<stdio.h>
#include"math.h"

 int main(){
   float p,r,t,s,c;
   printf("enter the pricipal,rate,time");
   scanf("%f%f%f",&p,&r,&t);
   s=(p*r*t)/100;
   c=p*pow((1+r/100),t)-p;

   printf("the SI is =   %f \n and the CI is = %f",s,c);

   
   return 0;

 }