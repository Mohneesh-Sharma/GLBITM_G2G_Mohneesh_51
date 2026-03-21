//Program to print the sum of series of 1/1!+2/2!+3/3!+----+n/n!
#include <stdio.h>
int fact(int);
int main() {
    int n,i;
    float s=0;
    printf("enter number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+(float)i/fact(i);
    }
    printf("%f",s);
    return 0;
}
int fact(int m){
    int f=1,i;
    for(i=1;i<=m;i++){
        f=f*i;
    }
    return(f);
}