#include<stdio.h>
#include"treeFunctionHeader.h"

void main(){
	char ch;
	do{
		printf("Select operation:\n1.Create Tree\n2.Print Tree\n3.Print Sum Of Tree\n4.Print Size Of Tree\n5.Print Height Of Tree\n");
		
		int choice;
		scanf("%d",&choice);
		struct node *rootNode1 = (node *)malloc(sizeof(node));;
		switch(choice){
			case 1 :{
					rootNode1 = createTree(rootNode1);
					break;
				}
			case 2 :{
					if(rootNode1!=NULL){
						printTree(rootNode1);
					}else{
						printf("Tree is not created\n");
					}
					break;
				}
			case 3 :{
					if(rootNode1!=NULL){
						sumOfBt(rootNode1);
					}else{
						printf("Tree is not created\n");
					}
					break;
				}
			case 4 :{
					if(rootNode1!=NULL){
						sizeOfBt(rootNode1);
					}else{
						printf("Tree is not created\n");
					}
					break;
				}
			case 5 :{
					if(rootNode1!=NULL){
						heightOfBt(rootNode1);
					}else{
						printf("Tree is not created\n");
					}
					break;
				}
			default :
				printf("Invalid Choice \n");
		
		}
		getchar();
		printf("Do you want to continue ? ");
		scanf("%c",&ch);
	}while(ch == 'y' || ch == 'Y');
}
