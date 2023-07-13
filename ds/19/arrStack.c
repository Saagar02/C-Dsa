#include<stdio.h>
#include<stdbool.h>
int size;
int top = -1;
bool isFull(){
	if(top == size-1){
		return true;
	}else{
		return false;
	}
}
int push(int stack[]){
	if(isFull()){
		printf("Stack Overflow\n");
		return -1;
	}else{
		top ++;
		printf("Enter the data : ");
		scanf("%d",&stack[top]);
		return 0;
	}
}
bool isEmpty(){
	if(top == -1){
		return true;
	}else{
		return false;
	}

}
int flag =0;
int pop(int stack[]){
	printf("flag = %d\n",flag);
	if(isEmpty()){
		flag =1;
		return -1;
	}else{	
		flag =0;
		int data = stack[top];
		top --;
		return data;
	}

}
int peek(int stack[]){
	if(top == -1){
		printf("Stack is Empty\n");
	}else{
		printf("%d \n",stack[top]);
	}
	return 0;
}
void main(){

	printf("Enter the size of stack : ");
	scanf("%d",&size);
	int stack[size];
	char ch;
	do{	
		printf("1.Push\n2.Pop\n3.isEmpty\n4.isFull\n5.Peek\n");
		printf("Enter your choice :");
		int choice;
		scanf("%d",&choice);
		
		switch(choice){
			case 1: 
				push(stack);
				break;
			case 2:{
				int retval  = pop(stack);
				if(flag == 1){
					printf("Stack Underflow\n");
				}else{
					printf("%d popped\n",retval);
				}
			       }
				break;
			case 3:
				isFull();
				break;
			case 4:
				isEmpty();
				break;
			case 5:
				peek(stack);
				break;
			defalut :
				printf("Wrong Choice\n");
		}
		getchar();
		printf("Do you want to continue ?\n");
		scanf("%c",&ch);
	}while(ch == 'Y'|| ch == 'y');

}
