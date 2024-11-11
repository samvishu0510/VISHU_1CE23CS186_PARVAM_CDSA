#include<stdio.h>
int main(){
    char name[20];
    //scanf("%s",name);=>does not get output with space
    printf("enter name: ");
    fgets(name,sizeof(name),stdin);//get output with space 
    printf("the name is :%s",name);
    return 0;

}