int main() {
    int n,a[10],temp,j,i;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("enter the elements  :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array :\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}