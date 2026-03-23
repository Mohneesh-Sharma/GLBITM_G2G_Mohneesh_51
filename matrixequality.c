//equality of two matrices
#include <stdio.h>
int main(){
    int a[10][10],b[10][10],r1,c1,r2,c2,j,i,f=0;
    printf("enter the number(order) of rows and columns of first matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("enter the number(order) of rows and columns of second matrix : ");
    scanf("%d%d",&r2,&c2);
    if(r1!=r2 || c1!=c2)
    printf("MATRICES ARE NOT EQUAL :(");
    else{
        printf("enter the elemens of the first matrix : ");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
        }
        printf("enter the elemens of the second matrix : ");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
             scanf("%d",&b[i][j]);
        }
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                if(a[i][j]!=b[i][j]){
                    f=1;
                }
            }
        }
        if(f==1)
        printf("MATRICES ARE NOT EQUAL:(");
        else
        printf("MATRICES ARE EQUAL:)");

    }
    return 0;
}