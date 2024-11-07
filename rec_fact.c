#include<stdio.h>
int main(){
    int num=0;
    int res=fibonacci(num);
    printf("%d",res);
return 0;
}   
int fibonacci(int n){
    if (n==4){
        return 1;
    }
    else{
        return n+fibonacci(n+1);
    }
}