#include<stdio.h>
#include<stdbool.h>
int count ;
bool arrEve(int arr[],int size){
	if(arr[size]%2==0){
		count++;
		if(count == 2){
			return true;
		}
	}
	if(size ==0 && arr[0]%2!=0){
		return false;
	}
	arrEve(arr,size-1);

}
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	bool retval = arrEve(arr,size-1);
	if(retval == true){
		printf("valid Array\n");
	}else{
	
		printf("Invalid Array\n");
	}
}
