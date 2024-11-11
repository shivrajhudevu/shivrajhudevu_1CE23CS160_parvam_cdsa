#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("enter the data:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    printf("the data is %s",str);
    int length=strlen(str);
    printf("The length of the data is %d",length);
    return 0;
}