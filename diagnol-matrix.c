#include<stdio.h>
int main(){
    int a[2][2]={
        {1,2},
        {3,4}
    };
    printf("diagonal elements:\n");

    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(i==j){
                printf("%d ",a[i][j]);
            }
        }
    }
}