#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct treeNode{
	int data;
	struct treeNode *left;
	struct treeNode *right;

}treeNode;

typedef struct Queue{

	struct Queue *btNode;
	struct Queue *next;
}Queue;

Queue *front = NULL;
Queue *rear = NULL;

bool isEmpty(){
	
	if(front == NULL && rear == NULL){
		return true;
	}else{
		return false;
	}

}
treeNode *dequeue(){
	if(isEmpty()){
		printf("Tree is Empty\n");
	}else{
		struct Queue *temp = front;
		struct treeNode *item = temp->btNode;

		if(front == rear){
			front = rear = NULL;
		}else{
			front = front->next;
		}
	
		free(temp);
		return item;
	}
}
void enqueue(struct treeNode* temp){
	
	Queue* newNode = (Queue*)malloc(sizeof(Queue));
	newNode->btNode = temp;
	newNode->next = NULL;
	if(isEmpty()){
		front = rear = newNode;		
	}else{
		rear -> next = newNode;
		rear = newNode;
	}
}
void levelOrder(treeNode *root){
	treeNode *temp = root;
	enqueue(root);
	while(!isEmpty()){
		temp = dequeue();
		printf("%d",temp->data);

		if(temp->left != NULL){
			enqueue(temp->left);
		}
		if(temp->right != NULL){
			enqueue(temp->right);
		}
	
	}
}
void main(){
	treeNode *rootNode = (treeNode*)malloc(sizeof(treeNode));
	levelOrder(rootNode);

}
