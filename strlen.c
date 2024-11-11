#include<stdio.h>
#include<string.h>
int main(){
   char str[10]="Hello";
   int length=0;
   while(str[length]!='\0'){
        length++;
   }
   printf("The length of the sring without inbuilt finc is: %d",length);
return 0;
}