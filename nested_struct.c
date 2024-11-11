#include<stdio.h>
#include<string.h>
struct Name {
    char firstname;
    char middlename;
    char lastname;
};
struct Person{

    int usn;
    float marks;
    struct Name name;
};
int main(){
    struct Person person;
    printf("enter first name : ");
    scanf("%s",&person.name.firstname);
    printf("enter middle name : ");
    scanf("%s",&person.name.middlename);
    printf("enter last name : ");
    scanf("%s",&person.name.lastname);
    printf("enter USN : ");
    scanf("%d",&person.usn);
    printf("enter Marks : ");
    scanf("%f",&person.marks);
    printf("NAME: %s\n",person.name.firstname);
    printf("NAME: %s\n",person.name.middlename);
    printf("NAME: %s\n",person.name.lastname);
    printf("NAME: %d\n",person.usn);
    printf("NAME: %s\n",person.marks);

   
    return 0;
}