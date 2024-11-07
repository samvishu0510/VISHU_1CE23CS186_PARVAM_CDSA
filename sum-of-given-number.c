#include<stdio.h>
int main(){
    int n,sum=0;
    n=456;
    printf("the given number=%d\n",n);
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    printf("sum=%d\n",sum);
    return 0;
    }