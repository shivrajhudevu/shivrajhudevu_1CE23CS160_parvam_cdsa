#include<stdio.h>
int main(){
    int a=32;
    int b=31;
    int* const ptr=&a;
    *ptr=40;
    printf("The value of ptr is %d",*ptr);
    return 0;
    }