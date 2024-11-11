#include<stdio.h>
int main(){
    char str[20];
    printf("enter the data:");
    fgets(str,sizeof(str),stdin);
        printf("the data is %s",str);
    return 0;
}