#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void push(struct Node**top, int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    if(!newNode){
        printf("memory allocation error\n");
        return ;
    }
    newNode->data=value;
    newNode->next=*top;
    *top = newNode;
    printf("pushed %d onto the stack\n",value);
}
int pop (struct Node** top){
    if(*top ==NULL){
        printf("stack is empty!cannot pop\n");
        return -1;
    }
    struct Node*temp =*top;
    int poppedValue =temp->data;
    *top =(*top)->next;
    free(temp);
    printf("popped %d from the stack\n",poppedValue);
    return poppedValue;
}
void dispalyStack(struct Node*top){
    struct Node*temp=top;
    if(top==NULL){
        printf("stack is empty\n");
    }else{
        printf("stack elemts:\n");
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
    struct Node*stack=NULL;

    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    dispalyStack(stack);

    pop(&stack);
    dispalyStack(stack);

    return 0;
}
