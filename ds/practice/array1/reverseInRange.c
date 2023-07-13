#include<stdio.h>
int *revInRange(int arr[],int size,int a,int b){
	while(a<=b){
		int store = arr[0];
		arr[a]=arr[b];
		arr[b]=store;
	}
	return arr;	
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
	int a = 0 ,b=0;
	printf("Enter starting and ending range \n");
	scanf("%d%d",&a,&b);
	int *retVal = revInRange(arr,size,a,b);

	printf("[");
	for(int i=0;i<size;i++){
		printf(" %d",*(retVal+i));
	}
	printf("]\n");

}
