/*WAP to compare two array by length and elements given by user if array are equal than
 *  print "Equal" otherwise print"Unequal" */
#include<stdio.h>
void main(){
	int size1;
	printf("Enter size of first array\n");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter element of first array\n");
	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}

	int size2;
	printf("Enter size of second array\n");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter element of second array\n");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	int flag =1;
	if(size1==size2){
		for(int i=0;i<size1;i++){
			if(arr1[i]==arr2[i]){
				flag =0;
				printf("%d\n",arr1[i]);
			}else{
				flag =1;
				break;
			}
		}
	}else{
		flag = 1;
	}	
	if(flag==0){
		printf("Array's are equal\n");
	}else{
		printf("Array's are not equal\n");
	}


}
