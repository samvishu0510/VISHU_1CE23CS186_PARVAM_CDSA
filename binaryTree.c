#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
int data;
struct Node* left;
struct Node* right;
} Node;
Node* createNode(int data) {
Node* newNode = (Node*)malloc(sizeof(Node));
newNode->data = data;
newNode->left = newNode->right = NULL;
return newNode;
}
Node* insertNode(Node* root, int data){
if (root == NULL){
    root = createNode(data);
} else if (data <= root->data){
    root->left = insertNode(root->left, data);
} else {
    root->right =insertNode(root->right, data);
}
    return root;
}
void printTree(Node* root){
if (root != NULL){
    printTree(root->left);
    printf("%d",root->data);
    printTree(root->right);
}
}
int main(){
    Node*root=NULL;
    root=insertNode(root,5);
    root=insertNode(root,3);
    root=insertNode(root,7);
    root=insertNode(root,2);
    root=insertNode(root,4);
    root=insertNode(root,6);
    root=insertNode(root,8);
    printf("Binary Tree:");
    printTree(root);
    printf("\n");
    return 0;
}
