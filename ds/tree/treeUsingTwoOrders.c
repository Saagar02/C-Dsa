#include<stdio.h>
#include<stdlib.h>


struct treeNode{

	int data;
	struct treeNode *right;
	struct treeNode *left;
};

struct treeNode *constructBt(int inOrder[],int preOrder[],int inStart, int inEnd, int preStart, int preEnd){
	
	if(preStart>preEnd){
		return NULL;
	}
	int rootNode = preOrder[preStart];
	struct treeNode *newNode = (struct treeNode*)malloc(sizeof(struct treeNode));
	newNode->data = rootNode;
	int index;
	for(index = inStart;index<=inEnd;index++){
		if(inOrder[index]==rootNode){
			break;
		}
	}
	int lLength = index - inStart;

	newNode->left = constructBt(inOrder,preOrder,inStart,index-1,preStart+1,preStart+lLength);
	newNode->right = constructBt(inOrder,preOrder,index+1,inEnd,preStart+lLength+1,preEnd);

	return newNode;
}

struct treeNode *preOrderBt(struct treeNode *node){
	
	if(node == NULL){
		return NULL;
	}
	printf("%d ",node->data);
	preOrderBt(node->left);
	preOrderBt(node->right);
}

struct treeNode *inOrderBt(struct treeNode *node){
	
	if(node == NULL){
		return NULL;
	}
	inOrderBt(node->left);
	printf("%d ",node->data);
	inOrderBt(node->right);
}
struct treeNode *postOrderBt(struct treeNode *node){
	
	if(node == NULL){
		return NULL;
	}
	postOrderBt(node->left);
	postOrderBt(node->right);
	printf("%d ",node->data);
}

void main(){

	int inOrder[] = {4,2,8,5,1,6,9,3,10,7};
	int preOrder[] = {1,2,4,5,8,3,6,9,7,10};
	
	int preStart = 0;
	int preEnd = 9;
	int inStart = 0;
	int inEnd = 9;
	struct treeNode *root =constructBt (inOrder,preOrder,preStart,preEnd,inStart,inEnd);
	printf("PreOrder BT : ");
	preOrderBt(root);
	printf("\n");

	printf("InOrder BT : ");
	inOrderBt(root);
	printf("\n");

	printf("PostOrder BT : ");
	postOrderBt(root);
	printf("\n");

}
