#include<stdio.h>
int top = -1;
int *arr;
void push(){
	printf("Enter %d elemets :\n",size);
	while(top!=size){
		top++;
		int data;
		printf("Enter Data :\n");
		scanf("%d",&data);
		arr[top] = data;
	}
}
void main(){
	printf("Enter size of stack");
	scanf("%d",&size);
	arr = (int *)malloc(size*sizeof(int))
	push();
	for(int i=top;i>=0;i--){
		printf("|%d|\n",arr[i]);
	}

}
