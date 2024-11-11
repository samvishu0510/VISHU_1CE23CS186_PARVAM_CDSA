#include<stdio.h>
int main(){
    int row,col,a[2][2],b[2][2],sum[2][2],i;
    printf("enter the no of rows:");
    scanf("%d",&row);
    printf("enter no coloumns:");
    scanf("%d",&col);
    printf("enter 1st element:\n");
    for(int i=0;i<row;i++)
    for (int j = 0; j < col; j++){
        printf("enter element %d:",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("enter 2nd element :\n");
    for(int i=0;i<row;i++);
    for (int j = 0; j < col; j++){
        printf("enter elements %d:",i,j);
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<row;i++);
    for (int j = 0; j < col; j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
    for(int i=0;i<row;i++);
    for (int j = 0; j < col; j++){
        printf("%d ",sum[i][j]);
}
return 0;
}