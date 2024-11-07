#include<stdio.h>
int main(){
    int a=40;
    int* ptr=&a;
    char b='g';
    char* ptr1=&b;
    printf("the value of a is %d\n",a);
    printf("The adress of a is %p\n",&a);
    printf("The pointer is %p \n",ptr);
    printf("The value of ptr is %d \n",*ptr);
    printf("The size of ptr is %d\n",sizeof(ptr));
    printf("The size of ptr1 is %d\n",sizeof(ptr1));
    return 0;
}