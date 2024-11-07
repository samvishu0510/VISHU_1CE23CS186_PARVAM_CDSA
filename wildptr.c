#include<stdio.h>
int main(){
    int* ptr;
    int num=100;
    int* a;
    a=&num;
    printf("%d\n",a);
    printf("%u\n",ptr);
    printf("%d",*a);
    return 0;
}