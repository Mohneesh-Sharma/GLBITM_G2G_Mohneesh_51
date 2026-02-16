#include<stdio.h>

int main()
{
    float cel,far;
    printf("enter temperature in centigrade scale");
    scanf("%f",&cel);
    far=cel*9/5+32;
    printf("temperature in Fahrenheit scale%.4f",far);
    return 0;
}