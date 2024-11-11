#include<stdio.h>
#include<string.h>
int main(){
    char temp;
    char str[100]="sammya";
    int start=0;
    int end=strlen(str)-1;
    while (start < end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
   printf("reversed str is %s\n",str);
    char str1[100]="sammya";
    if(strcmp(str1,str)==0){
        printf("it is a palindrome");
    }
    else{
        printf("its not a palindrome");
    }
    return 0;
}