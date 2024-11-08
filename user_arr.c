#include<stdio.h>
int main(){
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);  
    }
    printf("The arr elements are...");
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);  
    }
    return 0;
}