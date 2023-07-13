/*						Print Size							*/
#include<stdio.h>
#include<stdlib.h>

int size =0;
int sizeOfBt(struct node *bTree){
	if(bTree!=NULL){
		size = size+1;
		sizeOfBt(bTree->left);
		sizeOfBt(bTree->right);
	}
	return size;

}

