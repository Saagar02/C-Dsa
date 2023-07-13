#include<stdio.h>
int goodPair(int arr[],int size,int key){
	int count =0;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]+arr[j] == key){
				count++;
			}
		}
	}
	if(count > 0){
		return count;
	}else{
		return 0;
	}
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
	int key;
	printf("Enter the key Value \n");
	scanf("%d",&key);
	int retval = goodPair(arr,size,key);
	if(retval == 0){
		printf("No good pair found\n");
	}else{
		
		printf("%d good pair found\n",retval);
	}

}
