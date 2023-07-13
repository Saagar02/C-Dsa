#include<stdio.h>

int top =-1;
int size;
int push(int *stack){
		
		if(top==size-1){
			printf("Stack Overflow\n");
			return -1;
		}else{
		for(int i=0;i<size;i++){
				top++;
				printf("top = %d\n",top);
				printf("size = %d\n",size);
				printf("Enter Data :");
				scanf("%d",(stack+top));
			}
			return 0;
		}
}
int flag =0;
int pop(int *stack){
	if(top == -1){
		printf("Stack Underflow\n");
		flag = 1;
		return -1;
	}else{
//		int ret = *(stack+top);
		flag = 0;
		top--;
		return *(stack+(top+1));
	}
}
int peek(int *stack){
	if(top == -1){
		printf("Stack is empty\n");
		return -1;
	}else{
		return *(stack+top);
	}
}
int printStack(int stack[]){
	for(int i=top;i>=0;i--){
		printf("|%d|\n",stack[i]);
	}
	return 0;

}
void main(){
	printf("Enter size of stack : ");
	scanf("%d",&size);
	int stack[size];
        char ch ;
        int retval =0;
        do{
                printf("\nWhich operation you want to perform :\n");
                printf("1.Push\n2.Pop\n3.Peek\n");
                int  choice;
                scanf("%d",&choice);
                switch(choice){
                        case 1:
                                retval=push(stack);
                                break;
                        case 2:{
					int retval=pop(stack);
		//			printf("%d\n",top);
			       		if(flag != 1)
			       			printf("%d popped\n",retval);
			       }
				break;
                        case 3:
                               retval=peek(stack);
				if(top != -1)
			       		printf("|%d|",retval);
                               break;
                        defalut:
                                printf("Invalid option\n");
                }
                printStack(stack);

                getchar();
                printf("\nDo you want to perfrom more operations[y/n]\n");
                scanf("%c",&ch);
        }while(ch=='Y'||ch=='y');
}

