#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int age;
        char name[30];
        float marks;
    };
   struct person p1={21,"sammya",99.9};
    printf("name is %s\n",p1.name);
    printf("age is %d\n",p1.age);
    printf("marks is %.2f",p1.marks);
    return 0;
}