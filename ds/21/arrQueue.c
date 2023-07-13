#include<stdio.h>
int size=0;
int rear=-1;
int front = -1;

int enQueue(int arr[]){
	if(rear == size -1){
		printf("Queue is full\n");
		return -1;
	}else{
		rear++;
		printf("Enter data :");
		scanf("%d",&arr[rear]);
		if(front==-1){
			front = 0;
		}
		return 0;
	}
}
int flag=0;
int deQueue(int arr[]){
	if(front == -1){
		flag = 0;
		return -1;
	}else{
		int data = arr[front];
		arr[front]=0;
		if(rear == front){
			rear = front = -1;
		}else{	
			front ++;
		}
		printf("rear = %d\n",rear);
		flag =1;
		return data;
	}

}
int frontt(int arr[]){
	if(rear == -1){
		flag =0;
		return -1;
	}else{
		flag =1;
		return arr[front];
	}
}
int printQ(int arr[]){
	if(rear==-1){
		return -1;
	}else{
		for(int i=front;i<=rear;i++){
			printf("%d ",arr[i]);
		}
		return 0;
	}
}
void main(){
	printf("Enter the size of queue : ");
	scanf("%d",&size);
	int arr[size];
	char ch;
	do{
		int choice;
		printf("1.addQueue\n2.delQueue\n3.front\n4.printQ\n");
		printf("Enter Your Choice\n");
		scanf("%d",&choice);

		int ret;
		switch(choice){
			case 1:
				ret = enQueue(arr);
				break;
			case 2:{
				ret = deQueue(arr);
				if(flag == 0){
					printf("Queue is empty\n");
					break;
				}else{
					printf("%d deleted\n",ret);
				}
			       }
				break;
			case 3 :{
				int ret = frontt(arr);
				if(flag == 1){
					printf("front = %d\n",ret);
					break;
				}
				else{
					printf("Queue is empty\n");
				}
				}
				break;
			case 4 :{
				if(front == -1){
					printf("Queue is empty \n");
				}
				printQ(arr);
				}
				break;
			defalut :
				printf("Wrong Input\n");
				break;
		}
		getchar();
                printf("\nDo you want to perfrom more operations[y/n]\n");
                scanf("%c",&ch);	
	}while(ch=='Y'||ch=='y');


}
