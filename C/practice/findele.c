#include<stdio.h>
#include<stdlib.h>
int x=0;
int *search(){
	int n;
	printf("Enter no of elements of an array\n");
	scanf("%d",&n);
	
	printf("Enter %d elements\n",n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int *ptr = (int *)calloc(n,sizeof(int));
	int *temp = ptr;
	
	for(int i=0;i<n;i++){
		int count =0;
	/*	for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}*/
		for(int j=i;j>=0;j--){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count ==1){
			*ptr = arr[i];
			x++;		
			ptr++;
		}
	}

	return temp;
	
}
void main(){
	
	int *val = search();
	printf("Array Elements without reapeatation :\n");
		for(int i=0;i<x;i++){
			printf("%d\n",*(val+i));
		}
}
