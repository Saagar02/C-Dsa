#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node *next;
}node;
node *rear = NULL;
node *front = NULL;
int size;

node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data : ");
	scanf("%d",&newnode->data);
	newnode->next = NULL;

	return newnode;
}
int StackCount = 0;
int addLast(){
	node *newnode = createnode();
	if(rear == NULL){
		rear = front = newnode;
	}else{
		rear->next = newnode;
		rear = newnode;
	}
	StackCount++;
}
/*int StackCount(){
	int count=1;
	if(rear == NULL){
		count =0;
		return count;
	}else{
		node *temp = front;
		while(temp != rear){
			count ++;
			temp = temp ->next;
		}
		printf("count = %d\n",count);
		return count;
	}

}*/
int enQueue(){
	if(StackCount == size){
		return -1;	
	}else{
		addLast();
		return 0;
	}
}
int flag =0;
int deQueue(){
	if(front == NULL){
		flag =0;
		return -1;
	}else{	
		int data;
		if(front == rear){
			data = front->data;
			free(rear);
			front = rear = NULL;
			StackCount = 0;
		}else{
			node *temp = front;
			data = front->data;
			front = front ->next;
			free(temp);
			flag = 1;	
		}
			return data;	
	}
}
int frontt(){
	if(front == NULL){
		flag = 0;
		return -1;
	}else{
		flag =1;
		int data = front->data;
		return data;
	}
}
void main(){
        printf("Enter the size of Queue : ");
        scanf("%d",&size);
        char ch;
        do{
                int choice;
                printf("1.addQueue\n2.delQueue\n3.front\n");
                printf("Enter Your Choice\n");
                scanf("%d",&choice);

                int ret;
                switch(choice){
			case 1:{
				if(StackCount != size){
                                	 ret = enQueue();
				}else{
					printf("Queue is full\n");
				}
			       }
                                break;
			case 2:{
					 ret=deQueue();
				if(flag == 0){
					printf("Empty Queue\n");
					break;
				}else{
					printf("%d deleted\n",ret);
				}
			       }
				break;
                        case 3:{
                                ret = frontt();
                                if(flag == 0){
					printf("Empty Queue\n");
                                        break;
                                }else{
                                        printf("front = %d\n",ret);
                                }

                               }
                                break;
                }
                getchar();
                printf("\nDo you want to perfrom more operations[press enter]\n");
                scanf("%c",&ch);
        }while(ch=='\n'||ch=='\n');
}

