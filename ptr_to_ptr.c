#include<stdio.h>
int main(){
   int a=21;
   int *ptr=&a;
   int **pptr=&ptr;
   printf("%d",**pptr);
    return 0;
