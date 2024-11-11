#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hello";
    char c[50]="world";
    char b[70];
    strcpy(b,a);
    printf("copied string is %s\n",b);
    printf("legnth of cpy str is %d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str1 %s\n",a);
    strcat(b,c);
    printf("concatinated str2 %s\n",b);
    int res=strcmp(a,b);
    printf("%d\n",res);
    if(res==0){
        printf("both strings are equal");
        }
    else{
        printf("string 1 is greater than string 2");
    }    
    return 0;
}
