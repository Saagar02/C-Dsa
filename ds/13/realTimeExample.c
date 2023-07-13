#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int position;
        char pName [20];
        float time;
        struct node *next;
        struct node *prev;
}node;
node *head = NULL;
int count (){
	int nCount =0;
	if (head ==NULL){
		nCount=0;
	}else{
		node *temp = head;
		nCount =1 ;
		while(temp ->next !=NULL){
			nCount++;
			temp = temp ->next;
		}
	}
	return nCount;
}
node* createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter Players Position number : ");
	scanf("%d",&(newnode->position));
	printf("Enter players Name: ");
	getchar();
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		newnode->pName[i]=ch;
		i++;
	}
	printf("Enter time player hand over relay : ");
	scanf("%f",&newnode->time);
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}
int addFirst(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp ->next !=NULL){
			temp = temp ->next;
		}
		head ->prev = newnode;
		newnode -> next = head;
		head = newnode;
	}
	return 0;
}
int addnode(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp ->next !=NULL){
			temp = temp ->next;
		}
		newnode ->prev = temp;
		temp -> next = newnode;
	}
	return 0;
}
void addLast(){
	addnode();
}
int addAtPos(){
	int nCount = count();
	int pos ;
	printf("Enter the position where you want to add node : ");
	scanf("%d",&pos);
	if(pos<0 || pos > nCount+1){
		printf("Invalid position , please re-enter the position : ");
		addAtPos();
	}else{
		if(head == NULL||pos ==1){
			addFirst();
		}else if(nCount+1 ==  pos){
			addnode();
		}else{
			node *newnode = createnode();
			node *temp = head;
			while(pos-2){
				temp = temp ->next;
				pos--;
			}
			newnode->next = temp->next->next;
			newnode->next->prev = newnode;
			newnode->prev = temp;
			temp->next = newnode;
		}
	}
	return 0;
}
int delFirst(){
	if(head == NULL){
		printf("Can not delet node , LinkList is empty\n");
		return -1;
	}else{	
		if((count()==1)){
			free(head);
			head = NULL;	
		}else{
			head = head ->next;
			free(head->prev);
			head->prev = NULL;
		}
	}
}
int delLast (){
	if(head == NULL){
		printf("Can not delet node , LinkList is empty\n");
		return -1;
	}else{	
		if((count()==1)){
			free(head);
			head = NULL;	
		}else{
        		node *temp = head;
        		while(temp ->next->next !=NULL){
                		temp = temp ->next;
        		}
        		free(temp->next);
			temp->next = NULL;
		}
	}
}	
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
                        temp->next = temp ->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
                }
        }
        return 0;
}
int printLL(){
	if(head == NULL){
		printf("LinkList is empty\n");
		return -1;
	}else{
		node *temp = head;
		while(temp->next!=NULL){
			printf("|%d %s %f|->",temp->position,temp->pName,temp->time);
			temp = temp ->next;
		}printf("|%d %s %f|\n",temp->position,temp->pName,temp->time);
	}
	return 0;
}
void main(){
        char ch ;
        do{
                printf("\nWhich operation you want to perform :\n");
                printf("1.Add nodes\n2.Add node at first\n3.Add node at last\n4.Add node at position\n5.Delet first node\n6.Delet last node\n7.Delet node at position\n8.Count Total nodes\n9.Print Doubly Linklist\n");
                int  choice;
                scanf("%d",&choice);
                switch(choice){
                        case 1:{
                                getchar();
                                printf("Enter no of nodes you want to create\n");
                                int no;
                                scanf("%d",&no);
                                for(int i=0;i<no;i++){
                                        addnode();
                                }
                                break;
                               }
                        case 2:
                               addFirst();
                               break;
                        case 3:
                               addLast();
                               break;
                        case 4:
                               addAtPos();
                               break;
                        case 5:
                                delFirst();
                                break;
                        case 6:
                                delLast();
                                break;
                        case 7:
                                delAtPos();
                                break;
                        case 8:
                                printf("Node Count = %d\n",count());
                                break;
                        case 9:
                                printLL();
                                break;
                        defalut:
                                printf("Invalid option\n");
                }
        //      getchar();
                getchar();
                printf("\nDo you want to perfrom more operations[y/n]\n");
                scanf("%c",&ch);
        }while(ch=='Y'||ch=='y');
}

