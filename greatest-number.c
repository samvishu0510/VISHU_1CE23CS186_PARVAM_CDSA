#include<stdio.h>
int main(){
    int a=10;
    int b=16;
    int c=6;
    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number", a);
        else
            printf("%d is the largest number", c);
    }
    else {
        if (b >= c)
            printf("%d is the largest number", b);
        else
            printf("%d is the largest number", c);
    }
}