#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct treeNode{
	int data;
	struct treeNode *left;
	struct treeNode *right;
};
struct Queue{
	struct treeNode *btNode;
	struct Queue *next;
};

struct Queue *front = NULL;
struct Queue *rear = NULL;

bool isEmpty(){

	if(front  == NULL && rear == NULL){
		return true;
	}else{
		return false;
	}
}
void enqueue(struct treeNode *temp){
	
	struct Queue *node = (struct Queue*)malloc(sizeof(struct Queue));
	node -> btNode = temp;
	node -> next = NULL;
	if(isEmpty()){
		front = rear = node;
	}else{
	
		rear->next = node;
		rear = node;
	}
}
struct treeNode*  dequeue(){
	
	if(isEmpty()){
		printf("Tree is empty \n");
		return NULL;
	}else{
	
		struct Queue *temp = front;
		struct treeNode *temp2 = temp -> btNode;
		if(front == rear){
			front = rear = NULL;	
		}else{
			front = front->next;
		}
		free(temp);
		return temp2;
	}

}
 void levelOrder(struct treeNode  *root){
	
	struct treeNode *temp = (struct treeNode*)malloc(sizeof(struct treeNode));
	enqueue(root);

	while(!isEmpty()){
		temp = dequeue(root);
		printf("%d ",temp->data);

		if(temp->left != NULL){
			enqueue(temp->left);
		}
		if(temp->right != NULL){
			enqueue(temp->right);
		}
	}
}


