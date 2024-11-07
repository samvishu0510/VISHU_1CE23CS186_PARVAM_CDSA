#include<stdio.h>
int main(){
int a=10;//variable
int *ptr=&a;//ptr has add of a
int **pptr=&ptr;//pptr has add of ptr
printf("%d", **pptr); //value at value
return 0;
}