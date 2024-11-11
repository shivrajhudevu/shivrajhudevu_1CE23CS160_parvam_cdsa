#include<stdio.h>
#include<string.h>
int main(){
    char a[30]="Hello";
    char b[40];
    char c[39]="World";
    strcpy(b,a);
    printf("%s is the copied str\n",a);
    printf("the lenths is %d :\n",strlen(b));
    strcat(b,c);
    printf("the concatinated str is :%s ",b);


        return 0;
}