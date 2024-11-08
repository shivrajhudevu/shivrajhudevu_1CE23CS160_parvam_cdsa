#include<stdio.h>
int main(){
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int arr[n];
    int min;
    printf("enter the elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);  
        min=arr[0];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
        min=arr[i];
        }
    
    }
    printf("the min elem is %d",min);  
    return 0;
}