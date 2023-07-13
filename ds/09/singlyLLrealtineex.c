/*						REAL TIME EXAMPLE OF LINKLIST					*/

#include<stdio.h>
#include<stdlib.h>
typedef struct books{
	char bName[20];
	float price;
	int bookNo;
	struct books *next;
}book;
book * head = NULL;

book *createnode(){
	book* newnode = (book*)malloc(sizeof(book));
	printf("Enter book no : ");
	scanf("%d",&newnode->bookNo);
	getchar();
	printf("Enter book name : ");
//	getchar();
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		newnode->bName[i]=ch;
		i++;
	}
	printf("Enter book price : ");
	scanf("%f",&newnode->price);
	printf("\n");
	newnode ->next = NULL;
	return newnode;
}
int count (){
	if(head == NULL){
		printf("There are no books present in this series\n");
		return -1;
	}else{
		book *temp = head;
		int count =0;
		while(temp !=NULL){
			count ++;
			temp = temp -> next;
		}
		return count;
	}
}
int printLL(){
	book *temp = head;
	if(head == NULL){
		printf("No books exists");
		return -1;
	}else{
		while(temp->next!=NULL){
			printf("|%d  %s  %f|->",temp->bookNo,temp->bName,temp->price);
			/*printf("|%d ",temp->bookNo);
			printf("%s ",temp->bName);
			printf("%f |->",temp->price);*/
			temp = temp->next;
		}
			printf("|%d  %s  %f|\n",temp->bookNo,temp->bName,temp->price);
	}
	return 4;
}

int addLast(){	
	book *newnode = createnode();
	if(head==NULL){
		head = newnode;	
	}else{
		book *temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return 0;
}
int addFirst(){
	book *newnode = createnode();
	if(head == NULL){
		head = newnode;
	}else{
		newnode ->next = head;
		head = newnode;
	}
	return 0;
}
int addAtpos(){
	int pos;
	printf("Enter the book position : ");
	scanf("%d",&pos);
	int nCount = count();
	if(pos<0 || pos >nCount+1){
		printf("Wrong Position to add book\n");
		return -1;
	}else{
		if(pos == 1){
			addFirst();
		}else if(pos == nCount+1){
			addLast();
		}else{
			book *newnode = createnode();
			book *temp = head;
			while(pos-2){
				temp = temp ->next;
				pos--;
			}
			newnode ->next = temp ->next;
			temp -> next = newnode;
		}
		return 0;
	}
}
int delFirst(){
	if(head==NULL){
		return -1;
	}else{
		book *temp = head;
		head = head ->next;
		temp -> next = NULL;
		free(temp);
		return 1;
	}
}

int delLast(){
	if(head ==NULL){
		return -1;
	}else{
		book *temp = head;
		while(temp ->next->next !=NULL){
			temp = temp ->next;
		}
		free(temp ->  next);
		temp -> next = NULL;
		return 1;
	}
}
int delAtpos(){
	printf("Enter position : ");
	int nCount = count();
	int pos;
	scanf("%d",&pos);
	if(pos<=0 || pos>nCount){
		printf("Wrong Position to delet book\n");
		return -1;
	}else{
		if(pos==1){
			delFirst();
		}else if(pos==nCount){
			delLast();
		}else{
			book *temp = head;
			while(pos-2){
				temp = temp -> next;
				pos--;
			}
			book *temp2 = temp ->next;
			temp = temp ->next ->next;
			free (temp2);
		}
		return 1;
	}
}	
void main(){
        char ch ;
        int retval =0;
        do{
                printf("\nWhich operation you want to perform :\n");
                printf("1.Add books\n2.Add a book at first\n3.Add a book at last\n4.Add a  book at position\n5.Delet first book\n6.Delet last book\n7.Delet book at position\n8.Count Total no of books\n9.Show all Books in book-Shelf \n");
                int  choice;
                scanf("%d",&choice);
                switch(choice){
                        case 1:{
                                getchar();
                                printf("Enter no of books you want to add : ");
                                int no;
                                scanf("%d",&no);
                                for(int i=0;i<no;i++){
                                        retval=addLast();
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
                               retval=addAtpos();
                               break;
                        case 5:
                                retval=delFirst();
                                break;
                        case 6:
                                retval=delLast();
                                break;
                        case 7:
                                retval=delAtpos();
                                break;
                        case 8:
                                printf("Node Count = %d\n",count());
                                break;
                        case 9:
                                break;
                        defalut:
                                printf("Invalid option\n");
                }
                printLL();
                if(retval == 0){
                        printf("Book successfully Added\n");
                }else if(retval == 1){
			printf("Book removed Successfully\n");
		}else if(retval == -1){
                        printf("Invalid Operation\n");
                }else{
			printf(" ");
		}
                getchar();
                printf("\nDo you want to perfrom more operations[y/n]\n");
                scanf("%c",&ch);
        }while(ch=='Y'||ch=='y');
}
