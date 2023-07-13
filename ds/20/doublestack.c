#include<stdio.h>
#include<stdbool.h>
int size;
int top1 = -1;
int top2 = -1;

int push1(int stack[]){
        if(top1 == top2-1){
                printf("Stack Overflow-1\n");
                return -1;
        }else{
                top1 ++;
                printf("Enter the data : ");
                scanf("%d",&stack[top1]);
                return 0;
        }
}
int push2(int stack[]){
        if(top1 == top2-1){
                printf("Stack Overflow-2\n");
                return -1;
        }else{
                top2 --;
                printf("Enter the data : ");
                scanf("%d",&stack[top2]);
                return 0;
        }
}
int flag1 =0;
int flag2 =0;
int pop1(int stack[]){
        if(top1 == -1){
                flag1 =1;
                return -1;
        }else{
                flag1 =0;
                int data = stack[top1];
                top1 --;
                return data;
        }
}
int pop2(int stack[]){
        if(top2 == size){
                flag2 =1;
                return -1;
        }else{
                flag2 =0;
                int data = stack[top2];
                top2 ++;
                return data;
        }
}
void main(){

        printf("Enter the size of stack : ");
        scanf("%d",&size);
	top2 = size;
        int stack[size];
        char ch;
        do{
                printf("1.Push1\n2.Push2\n3.Pop1\n4.Pop2\n");
                printf("Enter your choice :");
                int choice;
                scanf("%d",&choice);

                switch(choice){
                        case 1:
                                push1(stack);
                                break;
                        case 2:
                                push2(stack);
                                break;
                        case 3:{
                                int retval  = pop1(stack);
                                if(flag1 == 1){
                                        printf("Stack Underflow\n");
                                }else{
                                        printf("%d popped\n",retval);
                                }
                               }
                                break;
                        case 4:{
                                int retval  = pop2(stack);
                                if(flag2 == 1){
                                        printf("Stack Underflow\n");
                                }else{
                                        printf("%d popped\n",retval);
                                }
                               }
                                break;
                        defalut :
                                printf("Wrong Choice\n");
                }
                getchar();
                printf("Do you want to continue ?\n");
                scanf("%c",&ch);
        }while(ch == 'Y'|| ch == 'y');

}
