#include<stdio.h>
struct adress{
    char street[20];
    char city[20];
    char state[20];
};
struct person{
    int age;
    char name[20];
    struct adress Adress;
};
int main(){
    struct person Person;

    printf("emter name:");
    scanf("%s",Person.name);
    printf("enter age:");
    scanf("%d",&Person.age);
    printf("enter street:");
    scanf("%s",Person.Adress.street);
    printf("enter city:");
    scanf("%s",Person.Adress.city);
    printf("enter state:");
    scanf("%s",Person.Adress.state);

    printf("\nname:%s\n",Person.name);
    printf("age:%d\n",Person.age);
    printf("\nstreet\n:%s",Person.Adress.street);
    printf("city%s",Person.Adress.city);
    printf("%s",Person.Adress.state);
}

