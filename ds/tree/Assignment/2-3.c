#include<stdio.h>
#include<stdlib.h>
struct treeNode {
	int data;
	struct treeNode *left;
	struct treeNode *right;
};

struct treeNode *constructBt(int preOrder[],int postOrder[],int preStart,int preEnd,int postStart,int postEnd){
	
	if(preStart>preEnd){
		return NULL;
	}
	int nodeData = preOrder[preStart];

	struct treeNode *newNode = (struct treeNode*)malloc(sizeof(struct treeNode));
	newNode->data = nodeData;
	int index ;

	if(preStart == preEnd){
		return newNode;
	}
	for(index = postStart;index<=postEnd;index++){
		if(postOrder[index] != preOrder[preStart+1]){
			break;
		}
	}
	newNode->left = constructBt(preOrder,postOrder,preStart+1,index-postStart+1+preStart,postStart,index);
	newNode->right = constructBt(preOrder,postOrder,preStart+index-postStart+2,preEnd,index+1,postEnd);
	
	return newNode;
}	
struct treeNode *preOrderBt(struct treeNode *root){

	if(root == NULL){
		return 0;
	}
	printf("%d ",root->data);
	preOrderBt(root->left);
	preOrderBt(root->right);
}
struct treeNode *inOrderBt(struct treeNode *root){

	if(root == NULL){
		return 0;
	}
	inOrderBt(root->left);
	printf("%d ",root->data);
	inOrderBt(root->right);
}
struct treeNode *postOrderBt(struct treeNode *root){

	if(root == NULL){
		return 0;
	}

	postOrderBt(root->left);
	postOrderBt(root->right);
	printf("%d ",root->data);
}
void main(){

	int preOrder[] = {1,2,4,5,8,3,6,9,7,10};
	int postOrder[] = {4,8,5,2,9,6,10,7,3,1};

	int preStart=0;
	int postStart = 0;
	int preEnd = 9;
	int postEnd = 9;
	
	struct treeNode *root = constructBt(preOrder,postOrder,preStart,preEnd,postStart,postEnd);
	
	printf("PreOrder :");
	preOrderBt(root);
	printf("\n");

	printf("inOrder :");
	inOrderBt(root);
	printf("\n");

	printf("PreOrder :");
	postOrderBt(root);
	printf("\n");
}
