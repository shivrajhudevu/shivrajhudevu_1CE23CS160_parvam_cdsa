#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node* createNode(int data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=node->right=NULL;
    return node;
}
 
struct Node* insert(struct Node* root,int data){
    if(root==NULL)return createNode(data);
    if(data<root->data)
    root->left=insert(root->left,data);
    else
    root->right=insert(root->right,data);
    return root;

}
void inorder(struct Node* root) {

if (root != NULL) { 
    inorder(root->left); 
    printf("%d ", root->data);
     inorder(root->right);

}

}

// Post-order traversal

void postorder(struct Node* root) {

if (root != NULL) {

postorder(root->left);

postorder(root->right);

printf("%d ", root->data);
}

}
void preorder(struct Node* root) {

if (root != NULL) {

printf("%d ", root->data);

preorder(root->left); 
preorder(root->right);
}
}

int main(){
    struct Node* root=NULL;
    int values[]={5,3,7,2,4,6,8};
    int n=sizeof(values)/sizeof(values[0]);
    for(int i=0;i<n;i++){
        root=insert(root,values[i]);
    }


   
    printf("inorder Traversal: ");
    inorder(root);
    printf("\n");

    printf("postorder Traversal: ");
    postorder(root);
    printf("\n");

     printf("preorder Traversal: ");
    preorder(root);
    printf("\n");
    return 0;
}

