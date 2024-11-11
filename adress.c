#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int age;
        char name[20];
        float marks;
        char fruit[20];
        char score[20];
    };
struct person p1={60,"samarth",98.99};
struct person *ptr=&p1;
printf("age is %d\n", ptr->age);
printf("name is %s\n", ptr->name);
printf("marks is %.2f\n", ptr->marks);
return 0;
}