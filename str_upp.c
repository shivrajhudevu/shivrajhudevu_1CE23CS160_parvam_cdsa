#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char c[39]="world";
    for(int i=0;c[i]!='\0';i++){
        c[i]=toupper(c[i]);
    }
    printf("%s",c);
    return 0;
}