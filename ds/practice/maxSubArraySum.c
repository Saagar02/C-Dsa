#include<stdio.h>

int findSub(int arr[],int size){
	int flag = 0;
	int count = 1;
	int max = 0;
	for(int i=1;i<size;i++){
		if(arr[i]==0 && arr[i-1]==1){
			flag =1;
		}
		if(arr[i] != arr[i-1]){
			count ++;
			if(count > max){
				max = count;
			}
		}else{
			if(count > max){
				max = count;
			}
			count = 1;
		}
	}
	if(max%2 !=0){
		max --;
	}
	if(flag == 1){
		printf("%d\n",max);
	}else{
		printf("No subarray found\n");
	}
	
}
void main(){
	printf("enter size of array\n");
	int size ;
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	findSub(arr,size);


}
