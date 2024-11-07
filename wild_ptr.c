#include<stdio.h>
int main(){
    int* ptr;
    int n=32;
    int* a;
    a=&n;
    printf("The adress of a is %u\n",a);
    printf("The adress of a is %u\n",ptr);
    printf("The value of n is %d",*a);
    return 0;
}