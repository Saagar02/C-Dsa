#include<stdio.h>
#include<stdlib.h>
int preOrder(node *root){
	if(root == NULL){
		return 0;
	}
	preOrder(root->left);
	printf("%d ",root->data);
	preOrder(root->right);
}
int inOrder(node *root){
	if(root == NULL){
		return 0;
	}
	inOrder(root->left);
	printf("%d ",root->data);
	inOrder(root->right);
}
int postOrder(node *root){
	if(root == NULL){
		return 0;
	}
	postOrder(root->left);
	postOrder(root->right);
	printf("%d ",root->data);
}
void printTree(node *root){

	char ch ;
	do{	
		int choice;
		printf("In which order do you want to print Tree ?\n1.preOrder\n2.inOrder\n3.postOrder\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				printf("Printing preOrder Tree :");
				preOrder(root);
				printf("\n");
				break;
			       }
			case 2:{
				printf("Printing inOrder Tree :");
				inOrder(root);
				printf("\n");
				break;
			       }
			case 3:{
				printf("Printing postOrder Tree :");
				postOrder(root);
				printf("\n");
				break;
			       }
			defalut:
				printf("Enter valid choice\n");

		
		}
		getchar();
		printf("Do you want to print Tree again ? \n");
		scanf("%c",&ch);
	}while(ch == '\n' );

}
