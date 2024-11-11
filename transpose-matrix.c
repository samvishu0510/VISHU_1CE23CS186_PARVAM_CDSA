#include<stdio.h>  
int main(){     
int a[2][2]={
        {1,2},
        {3,4}
    };  
    for(int i=0; i<2; i++){  
        for(int j=0; j<2; j++){  
            int temp = a[i][j];  
            a[i][j] = a[j][i];  
            a[j][i] = temp;  
        }  
    }  
    printf("The transposed matrix is:\n");  
    for(int i=0; i<2; i++){  
        for(int j=0; j<2; j++){  
            printf("%d ",a[j][i]);  
        }    
        printf("\n");
    }  
    return 0;  
}
