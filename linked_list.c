#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
Node* createNode(int value){
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}
void append(Node** head,int value){
    Node* newNode=createNode(value);
    if(*head ==NULL){
        *head=newNode;
        return;
    }
    Node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void deleteNode(Node** head,int value){
    Node* temp=*head;
    Node* prev=NULL;
    if(temp!=NULL && temp->data==value){
        *head =temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=value){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("value %d not found in the list!!\n",value);
        return;
    }
    prev->next=temp->next;
    free(temp);
}
void displaylist(Node* head){
    Node* temp=head;
    printf("linked list:");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    Node* head=NULL;
    append(&head,10);
    append(&head,20);
    append(&head,30);
    append(&head,40);
    displaylist(head);
    deleteNode(&head,10);
    displaylist(head);
    deleteNode(&head,30);
    return 0;

}