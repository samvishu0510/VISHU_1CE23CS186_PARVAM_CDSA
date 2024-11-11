#include<stdio.h>
typedef struct {
    int data[5];
    int front;
    int rear;
    } Queue;
    void initQueue(Queue*q){
        q->front=-1;
        q->rear=-1;
    }
    int isEmpty(Queue*q){
        return q->front == -1;
    }
    int isFull(q){
        printf("Queue Overflow! \n");
        return 0;
    }
    void enqueue(Queue*q,int value){
    if (isEmpty(q)){
        printf("Queue overflow!\n");
        return;
    }
    if (isEmpty(q)){
        q->front=0;
    }
    q->data[++q->rear]=value;
    }
    int dequeue(Queue*q){
        if(isEmpty(q)){
            printf("Queue underflow!\n");
            return -1;
        }
        int value = q->data[q->front];
        if(q->front ==q->rear){
            q->front=-1;
            q->rear = -1;
        }else{
            q->front++;
        }
        return value;
    }
    int peek(Queue*q){
        if(isEmpty(q)){
            printf("Queue is empty!\n");
            return -1;
        }
        return q->data[q->front];
    }
    void printQueue(Queue*q){
        if(isEmpty(q)){
            printf("Queue is empty!\n");
            return ;
        }
        printf("Queue:");
        for(int i=q->front;i<=q->rear;i++){
            printf("%d",q->data[i]);
        }
        printf("\n");
    }
    int main(){
        Queue q;
        initQueue(&q);
        enqueue(&q,1);
        enqueue(&q,2);
        enqueue(&q,3);
        printQueue(&q);

        printf("Dequeue:%d\n",dequeue(&q));
        printQueue(&q);
        printf("front:%d\n",peek(&q));
        enqueue(&q,4);
        enqueue(&q,5);
        enqueue(&q,6);
        printQueue(&q);
        return 0;
    }
