#include<stdio.h>
int main(){
    int* ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("bfr free %d\n", *ptr);
free(ptr);
printf("aftr free %d", *ptr);
    return 0;
}