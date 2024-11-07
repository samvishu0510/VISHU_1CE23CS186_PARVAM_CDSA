#include<stdio.h>
int main(){
    int n,rev=0,pali;
    printf("enter a number:");
    scanf("%d",&n);
    pali=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if (pali==rev)
    {
        printf(" palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}