/*						Bubble Sort 							*/
#include<stdio.h>

void main(){
	int size = 10;
	int arr[] = {10,-21,33,4,84,76,32,11,5,0};
	int size;
	int k =0;
	for(int i =0;i<size-1;){
		printf("arr[%d] = %d\n",i,arr[i]);
		printf("arr[%d] = %d\n",i+1,arr[i+1]);
		if(arr[i]>arr[i+1]){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;	
		}
		printf("arr[i] = %d\n",arr[i]);
		if(i == size-2-k){
			i =0;
			k++;	
		}else{
			i++;
		}
	//	printf("k = %d\n",k);
		if(k==size-1){
			break;
		}
	}
	printf("[");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	
	}
	printf("]\n");
}
