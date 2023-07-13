#include<stdio.h>
int size;
int front =-1;
int rear =-1;
int enQueue(int queue[]){
	printf("rear = %d  size = %d  front = %d\n",rear,size,front);
	if((rear == size-1 && front == 0)||(front == rear+1)){
		return -1;
	}else{
		if(rear == size -1){
			rear  = 0;
		}else{
			rear ++;
		}
		if(front = -1){
			front  =0;
		}
		printf("Enter the data : ");
		scanf("%d",&queue[rear]);
		return 0;
	}
}
int flag =0;
int deQueue(int queue[]){
	printf("rear = %d  size = %d  front = %d\n",rear,size,front);
	if(front == -1){
		flag = 0;
		return -1;
	}else{
		int data = queue[front];
		if(front == rear){
			printf("In if of deq\n");
			front = rear = -1;
		//	flag = 0;
		}else{
			if(front == size -1){
				front = -1;
			}else{
				front++;
			}
			
			flag = 1 ;
		}
		printf("rear = %d  size = %d  front = %d\n",rear,size,front);
		return data;
	}
}
int frontt(int queue[]){
	if(front == -1){
		return -1;
	}else{
		return queue[front];
	}
}
int printQ(int queue[]){
	if(front == -1){
		return -1;
	}else{
		for(int i = front ;i<=rear;i++){
			printf("%d ",queue[i]);
		}
		return 0;
	}
}
void main(){
	printf("Enter the size of Queue : ");
	scanf("%d",&size);
	int queue[size];


	char ch ;
	do{	
		int choice;
		printf("1.enQueue\n2.deQueue\n3.front\n4.printQ\n");
		printf("Enter you choice\n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:{
				int ret = enQueue(queue);
			       	if(ret == -1){
					printf("Queue is full\n");
				}
			       }
				break;
			case 2 :{
					int ret  = deQueue(queue);
					if(flag == 0){
						printf("Queue is empty\n");
					}else{
						printf("%d deleted\n",ret);
					}
				}
				break;
			case 3 :{
				int ret = frontt(queue);
				if(ret == -1){
					printf("Queue is empty\n");
					break;
				}else{
					printf("front = %d\n",ret);
				}
				}break;
			case 4 :{
				int ret = printQ(queue);
				if(ret == -1){
					printf("Queue is empty\n");
				}
				}
				break;
			deflaut :
				printf("Invalid input\n");
		}
		printf("Do you want to continue ?[Press enter for YES]\n");
		getchar();
		scanf("%c",&ch);
	}while(ch == '\n');

}
