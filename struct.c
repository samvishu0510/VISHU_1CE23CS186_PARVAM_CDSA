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
struct person p1={19,"samarth",90.8};
printf("Enter a user name");
fgets(p1.name,sizeof(p1.name),stdin);
p1.name[strcspn(p1.name,"\n")]=0;
printf("Enter marks");
scanf("%f",&p1.marks);
printf("enter age");
scanf("%d",&p1.age);
printf("age is %d\n", p1.age);
printf("name is %s\n", p1.name);
printf("marks is %.2f\n", p1.marks);
printf("his fav fruit is mango %s\n",p1.fruit);
printf("vk scores 100 in test match %s\n",p1.score);
return 0;
}