#include<stdio.h>

int inPlacePrefix(int arr[],int size){
	int temp[size];
	temp[0]=arr[0];
	for(int i=1;i<size;i++){
		temp[i] = temp[i-1]+arr[i];
	}
	if(arr[size-1]-arr[0]==0){
		return 0;
	}
	for(int i=1;i<size;i++){
		if(temp[i-1] == temp[size-1]-temp[i]){
			return i;
		}
	}
	return -1;
}
void main(){
	int size;
	printf("Enter the size of array \n");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int retval = inPlacePrefix(arr,size);
	if(retval !=0){
		printf("Equilibrium found at index no %d\n",retval);
	}else{
		printf("No Equilibrium found\n");
	}

}
