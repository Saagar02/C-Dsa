#include<stdio.h>
int size = 4;
int sumOfArray(int *ptr1,int *ptr2,int *ptr3,int size1,int size2){
	int i = 0;
	int size;
	if(size1<=size2){
		size = size2;
	}else{
		size = size1;
	}
	while(i<size){
		if(i >= size1){
			*(ptr3+i)=*(ptr2+i);
		}
		else if(i >= size2){
			*(ptr3+i) = *(ptr1+i);
		}else{
			*(ptr3+i) = *(ptr2+i)+*(ptr1+i);
		}
		i++;
	}
	return i;
}
void main(){
	int size1 =0;
	int size2 =0;
	printf("Enter the size of first array :");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter the elements of first array :\n");
	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the size of second array :");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter the elements of second array :\n");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	int arr3[size1+size2];
	int retval = sumOfArray(arr1,arr2,arr3,size1,size2);
	for(int i=0;i<retval;i++){
		printf("%d\n",arr3[i]);
	}

}
