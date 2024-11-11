#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int age;
        char name[30];
        float marks;
    };
   struct person p1={31,"sammya",99.99};
   struct person *ptr=&p1;
    printf("NAME: %s\n",ptr->name);
    printf("AGE: %d\n",ptr->age);
    printf("MARKS: %.2f",ptr->marks);
    return 0;
}