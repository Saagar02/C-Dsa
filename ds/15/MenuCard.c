/*                                              SINGLY CIRCULAR LINKLIST
 *                                                     	     ALL FUNCTIONS
 *              1) createNode()         5) addLast()            9) deletAtpos()
 *              2) PrintLL ()           6) count()
 *              3) addFist()            7) deletFirst()
 *              4) addAtpos()           8) deletLast()
 */					    
#include <stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node *next;
}node;
node *head = NULL;
node* createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data :");
	scanf("%d",&newnode -> data);
	newnode -> next = NULL;
	return newnode;
}
//1)add node .
int addnode(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		newnode -> next = head;
	}else{
		node *temp = head;
		while(temp ->next!= head){
			temp = temp ->next;
		}
		temp ->next = newnode;
		newnode -> next = head;
	}
	return 0;
}
// 8) Count Nodes
int count(){
	int nCount ;
	if(head == NULL){
		nCount =0;
		return nCount;
	}else{
		node *temp = head;
		nCount=1;
		while(temp -> next!= head){
			nCount ++;
			temp = temp ->next;
		}
		return nCount;
	}
}
//2)addnode at first.
int addFirst(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		newnode -> next = head;
	}else{
		node *temp = head;
		while(temp -> next!= head){
			temp = temp -> next;
		}
		newnode ->next = head;
		head = newnode;
		temp ->next = head;
	}
	return 0;
}
//3) addnode at last
int addLast(){
	addnode();
	return 0;
}
//4) addnode at position
int addAtPos(){
	int pos;
	printf("Enter node position :\n"); //22
	scanf("%d",&pos);

	if(head == NULL){
		node *newnode = createnode();
		head = newnode;
	}else{
		int nCount = count();
		if(pos<0 || pos>nCount+1){
			printf("Invalid position,please re-enter the position\n");
			addAtPos();
		}else{	
			if(pos == 1){
				addFirst();
			}else if(pos == nCount+1){
				addnode();
			}else{		
				node *newnode = createnode();
				node *temp = head;
				while(pos-2){
					temp = temp ->next;
					pos --;
				}
				newnode -> next = temp ->next;
				temp ->next = newnode;
			}
		}
	}
	return 0;
}
//5) Delet First Node.
int delFirst(){
	int nCount = count();
	if(head ==NULL){
		printf("Empty LinkList , cannot delet node\n");
		return -1;
	}else if(nCount ==1){
		free(head);
		head = NULL;
		return 0;
	}else{
		node *temp = head;
		while(temp->next!=head){
			temp = temp ->next;
		}
		head = head->next;
		free(temp->next);
		temp->next = head;
		return 0;
	}
}
// 6) delet last node
int delLast(){
	int nCount = count();
	if(head == NULL){
		printf("Empty LinkList cannot delet node\n");
		return -1;
	}else if(nCount ==1){
		free(head);
		head = NULL;
		return 0;
	}else{
		node *temp = head;
		while(temp->next->next!=head){
			temp = temp ->next;
		}
		free(temp->next);
		temp ->next = head;
		return 0;
	}
}
//7.Delet At pos 
int delAtPos(){
	if(head == NULL){
		printf("Invalid Operation\n");
		return -1;
	}
	int pos;
	printf("enter node position :\n");
	scanf("%d",&pos);
	int nCount = count();
	if(pos<0 || pos>nCount){
		printf("Invalid position,please re-enter the position :\n");
		delAtPos();
	}else{
		if(pos == 1){
			delFirst();
		}else if(pos == nCount){
			delLast();
		}else{	
			node *temp = head;
			while(pos -2){
				temp = temp->next;
				pos--;
			}	
			node *temp2 = temp->next;
			temp->next = temp->next->next;
			free(temp2);
		}
	}
	return 0;
}
/*int delMulNode(){
	int start;
	int end;
	scanf();


}*/
// 9) Print Nodes
void printSCLL(){
	if(head == NULL){
		printf("Empty LinkList\n");
	}else{
		node *temp = head;
		while(temp -> next !=head){
			printf("|%d|->",temp->data);
			temp = temp ->next;
		}
		printf("|%d|\n",temp->data);
	}
}
void main(){
	char ch ;
	int retval =0;
	do{
		printf("\nWhich operation you want to perform :\n");
		printf("1.Add nodes\n2.Add node at first\n3.Add node at last\n4.Add node at position\n5.Delet first node\n6.Delet last node\n7.Delet node at position\n8.Count Total nodes\n9.Print Singly Circular Linklist\n");
		int  choice;
		scanf("%d",&choice);

		printf("Before Operation ->>");
		printSCLL();

		switch(choice){
			case 1:{
				getchar();
				printf("Enter no of nodes you want to create\n");
				int no;
				scanf("%d",&no);
				for(int i=0;i<no;i++){
					retval=addnode();
				}
				break;
			       }
			case 2:
			       retval=addFirst();
			       break;
			case 3:
			       retval=addLast();
			       break;
			case 4:
			       retval=addAtPos();
			       break;
			case 5:
				retval=delFirst();
				break;
			case 6:
				retval=delLast();
				break;
			case 7:
				retval=delAtPos();
				break;	
			case 8:
				printf("Node Count = %d\n",count());
				break;
			case 9:
				break;
			defalut:
				printf("Invalid option\n");
		}
		printf("\nAfter Operation ->>");
		printSCLL();

		if(retval == 0){
			printf("Operation successful\n");
		}else if(retval == -1){
			printf("Invalid Operation\n");
		}
	//	getchar();
		getchar();
		printf("\nDo you want to perfrom more operations[y/n]\n");
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');
}
