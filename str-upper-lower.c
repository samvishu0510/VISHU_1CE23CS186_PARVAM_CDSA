#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[50]="hello";    
    for(int i=0;a[i]!='\0';i++){
        a[i]=toupper(a[i]);
    }
    printf("%S",a);
}
