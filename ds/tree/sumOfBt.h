#include<stdio.h>
#include<stdlib.h>

int sum =0;
int sumOfBt(struct node *bTree){
	if(bTree!=NULL){
		sum = sum + (bTree->data);
		sumOfBt(bTree->left);
		sumOfBt(bTree->right);
	}
	return sum;

}

