#include<stdio.h>
int countEle(int arr[],int size){
	int count=0;
	int max = arr[0];

	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
			count ++;
		}
		if(arr[i]<max){
			count++;
		}
	}	
	return count;
}
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	printf("Enter %d elements \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int retval = countEle(arr,size);
	printf("count : %d\n",retval);

}
