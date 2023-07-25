#include<stdio.h>
#include<stdlib.h>

int top =-1;
int size;
typedef struct book{
	char bName[20];
	int bNo;
	float bPrice;
}book;
int push(book *stack){
	if(top = size-1){
		printf("Stackk overflow\n");
		return -1;
	}else{	
		top++;
//		struct book s[top];
		getchar();
		printf("Enter book name\n");
		fgets(stack[top].bName,20,stdin);
		printf("Enter book no\n");
		scanf("%d",&stack[top].bNo);
		printf("Enter book Price\n");
		scanf("%f",&stack[top].bPrice);

		return 0;	
	//	(stack+top)=&(s[top]);
	}
}
int flag =0;
int pop(book *stack){
        if(top == -1){
                printf("Stack Underflow\n");
                flag = 1;
                return -1;
        }else{  
		int ret = *(stack+top);
                flag = 0;
		
                top--; 
                return ret;
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
                switch(choice){
                        case 1:
                                retval=push(arr);
                                break;
                      	case 2:{
                                        book *retval=pop(arr);
                //                      printf("%d\n",top);
                                        if(flag != 1)
                                                printf("%d popped\n",retval);
                               }
                                break;
                      /*  case 3:{
                               retval=peek(stack);
                                if(top != -1)
                                        printf("|%d|",retval);
					}
                               break;*/
                        defalut:
                                printf("Invalid option\n");
                }
          //      printStack(stack);
		printf("|Book Name = %s , Book No = %d , Book Price = %f |\n",arr[top].bName,arr[top].bNo,arr[top].bPrice);
                getchar();
                printf("\nDo you want to perfrom more operations[y/n]\n");
                scanf("%c",&ch);
        }while(ch=='Y'||ch=='y');
}

