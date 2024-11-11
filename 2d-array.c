#include<stdio.h>
int main(){
    int row,col;
    scanf("%d\n",&row);
    scanf("%d\n",&col);
    int a[10][10];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d\n",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}