#include<stdio.h>
#include<stdlib.h>
typedef struct student {
//	char Name [20];
	int rollNo;
//	float height;
	struct student *next;
}student;
student *head = NULL;

student  *createNode(){
	student *newnode = (student *)malloc(sizeof(student));
/*	getchar();
	printf("Enter the Name of student\n ");
	fgets(newnode->Name,20,stdin);*/
	
	printf("Enter the Roll No of student\n");
	scanf("%d",&newnode->rollNo);
	
/*	printf("Enter  the height of student\n");
	scanf("%f",&newnode->height);*/
	newnode->next = NULL;

}
student *addNode(){
	student *newnode = createNode();
	if(head == NULL){
		head = newnode;
	}else{
		student *temp = head;
		while(temp->next !=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}


}
student *addFirst(){
	student *newnode = createNode();
	if(head == NULL){
		head = newnode;
	}else{
		newnode->next = head;
		head = newnode;
	}

}
student *printData(){
	if(head == NULL){
		printf("No student data available\n");
	}else{
		student *temp = head;
		while(temp!=NULL){
			printf("%d\n",temp->rollNo);
			temp = temp->next;
		}
	}

}

void main(){
	char choice;
	do{
		printf("1.Add Students data\n");
		printf("2.Add Student data at first\n");
		printf("3.Add student data at selected position\n");
		printf("4.Delet Last Student data\n");
		printf("5.Delet first Student data at first\n");
		printf("6.Delet student data at selected position\n");
		printf("7.Print student data\n");

		int ch;
		printf("Enter Your Choice\n");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				{	printf("How many nodes do you want to add ?\n");
					int no;
					scanf("%d",&no);
					for(int i=0;i<no;i++){
						addNode();
					}
					break;
				}
			case 2 :
				addFirst();
				break;
			case 7:
				printData();
				break;
		}
		getchar();
		printf("Do you want to perform more operations ?[press Enter]\n");
		scanf("%c",&choice);
	
	}while(choice == '\n'||choice == '\n');

}
