#include<stdio.h>
typedef struct{
    int data[5];
    int front;
    int rear;
}Que;
void initQue(Que *q){
    q->front=-1;
    q->rear=-1;
}
int isEmpty(Que *q){
    return q->front==-1;
}
int isFull(Que *q){
    return q->rear==4;
}
void enqueue(Que *q,int value){
    if(isFull(q)){
        printf("Queue overlfow!!\n");
        return ;
    }
    if(isEmpty(q)){
        q->front=0;
    }
    q->data[++q->rear]=value;
}
int dequeue(Que *q){
    if (isEmpty(q)){
        printf("queue underflow!!\n");
        return -1;
    }
    int value =q->data[q->front];
    if (q->front==q->rear){
        q->front=-1;
        q->rear=-1;
    }
    else{
        q->front++;
    }
    return value;
    }
    int peek(Que *q){
        if(isEmpty(q)){
            printf("Que is empty!!\n");
            return -1;
        }
        return q->data[q->front];
    }
    void printQueue(Que *q){
        if(isEmpty(q)){
            printf("que is empty\n");
            return;
        }
        printf("Queue: ");
        for (int i=q->front;i<=q->rear;i++){
            printf("%d",q->data[i]);
        }
        printf("\n");
    }
int main(){
   Que q;
   initQue(&q);
   enqueue(&q,1);
   enqueue(&q,2);
   enqueue(&q,3);
   enqueue(&q,4);
   printQueue(&q);
   printf("Dequeued :%d\n",dequeue(&q));
   printQueue(&q);
   printf("Fornt: %d\n",peek(&q));
   enqueue(&q,5);
   enqueue(&q,6);
   enqueue(&q,7);
   printQueue(&q);
    return 0;
}