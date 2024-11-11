#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int*array=(int*)malloc(n*sizeof(int));
    if(array==NULL){
        printf("Memory allocation failed!\n");
        return 1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    }
    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++){
        scanf("$d\n",&array[i]);
    }
    printf("You entered:");
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}