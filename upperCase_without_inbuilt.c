#include<stdio.h>
int main(){
    char str[]="Hello, world";
    int i=0;

    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-'a'+'A';
        }
        i++;
    }
   printf("Uppercase string is : %s\n",str);
    return 0;
}