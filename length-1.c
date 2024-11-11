#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="hello";
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    printf("the length of the string is %d",length);
    return 0;
}