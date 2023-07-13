#include<stdio.h>
#include<stdlib.h>

typedef struct data {
	int no;
	struct data *next;
}data; 
	data *head = NULL;
data *createnode (){
	data *newnode = (data *)malloc(sizeof(data));
	printf("Enter the data:\n");

		if(scanf("%d",&newnode -> no)){
			newnode -> next = NULL;
			return newnode;
		}
		else{
			printf("Invalid Input\nEntered element is not a integer\n");
		}
}
void addLast(){
	data *newnode = createnode();
	if(head == NULL){
		head = newnode;
	}else{	
		data *temp = head;
		while(temp -> next !=NULL){
			temp = temp ->next;
		}
		temp -> next = newnode;
	}
}
int nCount (){
	data * temp = head;
	int count =0;
	while(temp !=NULL){
		count ++;
	}
	return count;
}
void printLL(){
	data *temp = head;
	while(temp!=NULL){
		printf("|%d|",temp -> no);
		temp = temp ->next;
	}
}
void search(int no){
	int freq =0;
	int flag =0;
	data *temp = head;
	while(temp !=NULL){
		if(temp -> no == no){
			flag ==1;
			freq ++;
		}
		temp = temp -> next;
	}
	printf("frequency of %d is %d\n",no,freq);
	if(freq == 0){
		printf("Element does not exist \nPlease enter valid element \n");
	}else{
		int indexNO=1;
		temp = head;
		int noFreq = freq;
	//	printf("noFreq = %d\n",noFreq);
		int lastOc = 0;
		while(temp != NULL){
			if(temp -> no == no){
			
				if(freq == 1){
					lastOc = indexNO;
					printf("%d occured only onced in Linkedlist at node no %d\n",no,lastOc);
					break;
				}else{	
					if(noFreq == 1){
						printf("Second last occurance of %d found at node no %d\n",no,lastOc);
						break;
					}noFreq--;
				//	printf("noFreq after -- = %d\n",noFreq);
				//	printf("last oc = %d\n",lastOc);
				}
				lastOc = indexNO;
			}
			indexNO++;
			temp = temp->next;
		}
	//	printf("Second last occurance of %d found at node no %d\n",no,indexNO);
	}
}
void main(){
	char choice;
	do{
		printf("Enter no of nodes you want to add:\n");
		int nNo;
		scanf("%d",&nNo);
		for(int i=0;i<nNo;i++){
			addLast();
		}
		printf("\nDo you want to add more nodes ?[y/n]\n");
		getchar();
		scanf("%c",& choice);
	}
	while(choice == 'y' || choice == 'Y');
	printLL();
	printf("\nEnter the Element on which you want to perform operation\n");
	int no;
	scanf("%d",&no);
	search(no);
}
