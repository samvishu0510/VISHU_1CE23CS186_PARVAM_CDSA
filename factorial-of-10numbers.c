#include<stdio.h>
 int main(){
    int i,fact=1;
    for(i=1;i<=10;++i){
        fact=fact*i;
    }
    printf("factorial of 10 is %d\n",fact);
    return 0;
 }