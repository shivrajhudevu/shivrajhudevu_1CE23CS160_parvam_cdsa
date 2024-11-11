#include<stdio.h>
#include<string.h>
int main(){
    char a[30]="Hello";
    char b[40];
    char c[39]="Hello";
    strcpy(b,a);
    printf("%s is the copied str\n",a);
    printf("the lenths is %d :\n",strlen(b));
    strcat(b,c);
    printf("the concatinated str is : %s\n ",b);
    int res=strcmp(b,c);
    if(res==-1){
        printf("string is lesser\n");
    }
    else if(res==0){
        printf("strings are equal\n");
    }
    else{
        printf("string1 is greater\n");
    }
    printf("%s",strrev(c));

        return 0;
}