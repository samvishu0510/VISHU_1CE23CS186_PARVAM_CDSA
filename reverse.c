#include<stdio.h>
int main(){
    int n,rev=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
        printf("reverse number is %d",rev);
    }

//123->123%10=32
//3 +digit=32

//12/10=1
