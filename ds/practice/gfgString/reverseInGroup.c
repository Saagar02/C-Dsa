#include<stdio.h>
void swap (int *ptr1,int *ptr2){
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
void reverseInGroup(int arr[],int size,int k){
	int count =0;
	int pos ;

	for(int i=0;i<size;i++){
		pos = i;
		count++;
		if(count == k || i == size-1){
			int no = count/2;
			while(no--){
				swap(&arr[pos],&arr[i-count+1]);
				pos --;
				count++;
			}
			count =0;
		}
	
	}
}
void main(){
	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the %d elements\n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int k;
	printf("Enter the k element\n");
	scanf("%d",&k);
	reverseInGroup(arr,size,k);
	printf("After reverse :");
	printf("[");
	for(int i=0;i<size-1;i++){
		printf("%d ",arr[i]);
	}
	printf("%d ]\n",arr[size-1]);
}
