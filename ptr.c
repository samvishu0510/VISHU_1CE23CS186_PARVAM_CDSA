#include<stdio.h>
int main(){
    int a=10;
    int*ptr=&a;
    ptr=&a;
    printf("thr value of a is %d\n",a);
    printf("the adress of a is %u\n",&a);
    printf("the ptr is %u\n",ptr);
    printf("the value of ptr is %d\n",*ptr);
    return 0;
}