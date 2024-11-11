#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the no of elem : ");
    scanf("%d",&n);
    int* array=(int*)malloc(n*sizeof(int));
    if(array==NULL){
        printf("Memory allocation is failed\n");
        return 1;
    }
   printf("Enter %d elments:\n",n);
   for (int i=0;i<n;i++){
    scanf("%d",&array[i]);

   }
   printf("u enterd : ");
   for(int i=0; i<n;i++){
    printf("%d",array[i]);
   }
   printf("\n");
   free(array);
    return 0;
}