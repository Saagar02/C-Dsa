#include<stdio.h>

/*int binarySearch(int arr[],int start,int end,int m){
	for(int i=0;i<m;i++){
		int key = i;
		int flag  =0;
		while(start<=end){
			int mid = (start+end)/2;
			if(arr[mid]==key){
				flag = 1;
				break;
			}else{
				if(arr[mid]>key){
					end = mid-1;
				}else{
					start = mid +1;
				}
			}
		}
		if(flag == 0){
			return i;
		}
	}
}*/
int binarySearch(int arr[],int start, int end, int m){
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[start]!=start){
			return start;
		}else{
			if(arr[mid] == mid ){
			start = mid + 1;
			}else{
				end = mid-1;
			}
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
	int m;
	printf("Enter the number you want to search in array :");
	scanf("%d",&m);
	int start = 0;
	int end = size-1;
	int retval = binarySearch(arr,start,end,m);
	if(retval ==-1){
		printf("Element not found\n");
	}else{
		printf("Smallest Missing number = %d\n",retval);
	}


}
