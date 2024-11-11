#include<stdio.h>
int main(){
    int a=10;
    int* ptr=&a;
    printf("the value of a is %d\n",a);
    printf("The adress of a is %u\n",&a);
    printf("The pointer is %u \n",ptr);
    printf("The value of ptr is %d \n",*ptr);
    return 0;
}