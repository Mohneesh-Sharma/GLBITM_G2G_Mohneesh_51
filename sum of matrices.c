//sum of two matrices
#include <stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,j,i;
    printf("enter the number(order) of rows and columns of first matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("enter the number(order) of rows and columns of second matrix : ");
    scanf("%d%d",&r2,&c2);
    if(r1!=r2 || c1!=c2)
    printf("SUM NOT POSSIBLE :(");
    else{
        printf("enter the elemens of the first matrix : ");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
        }
        printf("enter the elemens of the second matrix : ");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&b[i][j]);
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("the sum matrix : \n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
            printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}