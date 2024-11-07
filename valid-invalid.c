#include<stdio.h>
int main(){
int a;
    a=10;
    int b=20;
    a=12;

    if((a>5)&&(b>5)){
        printf("a & b are greater than 5\n");
    }
    else{
        printf("a & b are not greater than 5\n");
    }
    if((a>5)||(b>5)){
        printf("a & b are greater than 5\n");
    }
    else{
        printf("a & b are not greater than 5\n");
    }
    int valid=1;
    int invalid= !valid;
    printf("%d\n",valid);
    printf("%d\n",invalid);
    return 0;
}