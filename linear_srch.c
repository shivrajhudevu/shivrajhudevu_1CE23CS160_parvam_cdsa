#include<stdio.h>
int main(){
    int arr[]={5,3,98,32,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("enter elements to be searched ");
    scanf("%d",&target);
  
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("elem is present");
            return 0;
        }
    
        else{
            printf("elem is not present");
        return 0;
        }
    }
}
