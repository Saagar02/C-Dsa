#include<stdio.h>

void main(){
	int size;
	printf("Enter Array Size\n");
	scanf("%d",&size);

	int arr[size];
	int i=0;
	int sum =0;
	printf("Enter %d element\n",size);
	while(size--){
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
		i++;
	}
	printf("sum of array is %d\n",sum);

}
