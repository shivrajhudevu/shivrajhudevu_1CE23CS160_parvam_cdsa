#include<stdio.h>
int main(){
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int arr[n];
    int max;
    printf("enter the elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);  
        max=arr[0];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    
    }
    printf("the max elem is %d",max);  
    return 0;
}