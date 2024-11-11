#include<stdio.h>
#include<string.h>
int main(){
   char str1[50]="Sam";
   char str2[40]="mya";
   int i=0,j=0;
   while(str1[i]!='\0'){
        i++;
   }
   while(str2[j]!='\0'){
        str1[i++]=str2[j++];
   }
   str1[i]='\0';
   printf("%s\n",str1);
   printf("the lenth is %d :",strlen(str1));
    return 0;
}