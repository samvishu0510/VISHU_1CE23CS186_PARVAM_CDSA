#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct Stack{
    int items[MAX];
    int top;
};
void initStack(struct Stack *s){
s->top=-1;
}
int isFULL(struct Stack *s){
    return s->top==-1;
}
int isEmpty(struct Stack *s){
    return s->top == -1;
}
void push(struct Stack*s,int value){
    if(isFULL(s)){
        printf("Stack is Full! cannot push%d\n",value);
    }else{
        s->top++;
        s->items[s->top]=value;
        printf("Pushed %d on to the Stack\n",value);
    }
}
int pop(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty! cannot pop\n");
        return -1;
    }else{
        int poppedValue =s->items[s->top];
        s->top--;
        printf("Popped %d from the stack\n",poppedValue);
        return poppedValue;
    }
}
void displayStack(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements:");
        for(int i=0;i<=s->top;i++){
            printf("%d ",s->items[i]);
        }
        printf("\n");
    }
}
int main(){
    struct Stack stack;
    initStack(&stack);
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    displayStack(&stack);
    return 0;
}