#include<stdio.h>
int size = 4;
int* sumOfArray(int *ptr1,int *ptr2,int *ptr3,int size1,int size2){
	int a=0;
	int b=0;
	for(int i=0;i<size1+size2;i++){
		if(a>=size1){
			*(ptr3+i) = *(ptr2+b);
			b++;
		}else if(b >=size2){
			*(ptr3+i) = *(ptr1+a);
			a++;
		}else{
			if(*(ptr1+a)<*(ptr2+b)){
				*(ptr3+i) = *(ptr1+a);
				a++;
			}else{
				*(ptr3+i) = *(ptr2+b);
				b++;
			}	
		}
	}
	return ptr3;
}
int* bubbleSort(int *ptr , int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(*(ptr+j)>*(ptr+j+1)){
				int store = *(ptr+j);
				*(ptr+j) = *(ptr+j+1);
				*(ptr+j+1) = store;
			}
		}
	}
	return ptr;
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
	bubbleSort(arr1,size1);
	printf("Enter the size of second array :");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter the elements of second array :\n");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	bubbleSort(arr2,size2);
	int arr3[size1+size2];
	sumOfArray(arr1,arr2,arr3,size1,size2);
	printf("After Sorting :\n");
	for(int i=0;i<size1+size2;i++){
		printf("%d\n",arr3[i]);
	}

}
