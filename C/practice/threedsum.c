#include <stdio.h>

int threed(int ***ptr,int size){
	for(int i=0 ;i<size;i++){
		printf("%d\n",*(*(*(ptr+i))));
	}

}
void main(){
	int arr[3][3][3]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18},{19,20,21,22,23,24,25,26,27}};
	int size = sizeof(arr)/sizeof(int);
	int sum = threed(arr,size);
	printf("%d\n",sum);

}
