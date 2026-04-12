//solving quadratic eqn using switch statement
#include <stdio.h>
#include<math.h>

int main() {
    float a,b,c,d,img,r1,r2;
    printf("enter your coefficients a,b and c : ");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    switch(d>0){
        case 1:
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The roots are real and distinct.The roots are : \nRoot 1 : %f\nRoot 2 : %f",r1,r2);
        break;
        case 0:
        switch(d<0){
            case 1:
            r1=r2=-b/(2*a);
            img=sqrt(-d)/(2*a);
            printf("The roots are imaginary and distinct.The roots are : \nRoot 1 : %.2f+%.2fi\nRoot 2 : %.2f-%.2fi",r1,img,r2,img);
            break;
            case 0:
            r1=r2=-b/(2*a);
            printf("The roots are real and equal.The roots are : \nRoot 1 : %.2f\nRoot 2 : %.2f",r1,r2);
            break;
        }
    }
    return 0;
}