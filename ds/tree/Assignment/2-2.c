#include<stdio.h>
#include<stdlib.h>

struct treeNode{

	int data;
	struct treeNode *left;
	struct treeNode *right;
};


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
struct treeNode *constructBt(int postOrder[],int inOrder[],int postStart,int postEnd,int inStart,int inEnd){
	
	if(inStart> inEnd){
		return NULL;
	}
	int rootNode = postOrder[postEnd];
	struct treeNode *newNode = (struct treeNode*)malloc(sizeof(struct treeNode));
	newNode->data = rootNode;

	int index ;
	for(index = inStart;index<inEnd;index++){
		if(rootNode == inOrder[index]){
			break;
		}
	}
	int lLength = index-inStart;	//4
	printf("%d\n",lLength);
	newNode->left = constructBt(postOrder,inOrder,postStart,postStart+lLength-1,inStart,index-1);
	newNode->right = constructBt(postOrder,inOrder,postEnd-index-1,postEnd-1,index+1,inEnd);
	
	return newNode;
}
void main(){

	int postOrder[] = {4,8,5,2,9,6,10,7,3,1};
	int inOrder[] =  {4,2,8,5,1,6,9,3,10,7};
	
	int postStart = 0;
	int postEnd = 9;
	int inStart = 0;
	int inEnd = 9;

	struct treeNode *root = constructBt(postOrder,inOrder,postStart,postEnd,inStart,inEnd);

	printf("preOrderBt :");
	preOrderBt(root);
	printf("\n");

	printf("inOrderBt :");
	inOrderBt(root);
	printf("\n");

	printf("PostOrderBt :");
	postOrderBt(root);
	printf("\n");
}

