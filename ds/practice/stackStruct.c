#include<stdio.h>
#include<stdlib.h>

int top =-1;
int size;
typedef struct book{
	char bName[20];
	int bNo;
	float bPrice;
}book;
book *head = NULL;

int push(book *arr){
	if(top == size-1){
		printf("size = %d\n",size);
		printf("top = %d\n",top);
		printf("Stackk overflow\n");
		return -1;
	}else{	

		top++;
		book obj;
		printf("Enter book name\n");
		getchar();
		fgets(obj.bName,20,stdin);
		printf("Enter book no\n");
		scanf("%d",&obj.bNo);
		printf("Enter book Price\n");
		scanf("%f",&obj.bPrice);
		
		arr[top] = obj;
		return 0;
	}
}
int flag =0;
int pop(){
		top--;
		if(top == -1){
			printf("Stack Underflow\n");
			flag =1;
			return -1;
		}else{
			printf("TOP = %d\n",top);
			int value = top;
			top--;
			return (value);
		}
}
void main(){
        printf("Enter size of stack : ");
        scanf("%d",&size);
        char ch ;
        int retval =0;
	struct book arr[size];
        do{
                printf("\nWhich operation you want to perform :\n");
                printf("1.Push\n2.Pop\n3.Peek\n");
                int  choice;
                scanf("%d",&choice);
		printf("main top = %d\n",top);
                switch(choice){
                        case 1:	
                                retval=push(arr);
                                break;
                        case 2:{
          //                       printf("|Book Name = %s , Book No = %d , Book Price = %f |\n",arr[top].bName,arr[top].bNo,arr[top].bPrice);
				        int retval=pop(arr);
					printf("retval %d\n",retval);
                                        if(flag != 1){
						 printf("|Book Name = %s , Book No = %d , Book Price = %f |popped\n",arr[retval].bName,arr[retval].bNo,arr[retval].bPrice);
					}
                               }
                                break;
                       /* case 3:{
                               retval=peek(stack);
                                if(top != -1)
                                        printf("|%d|",retval);
					}
                               break;*/
                        defalut:
                                printf("Invalid option\n");
                }
          //      printStack(stack);
	//	 printf("|Book Name = %s , Book No = %d , Book Price = %f |\n",arr[top].bName,arr[top].bNo,arr[top].bPrice);
                getchar();
                printf("\nDo you want to perfrom more operations[y/n]\n");
                scanf("%c",&ch);
        }while(ch=='Y'||ch=='y');
}

