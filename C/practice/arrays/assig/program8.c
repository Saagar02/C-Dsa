#include<stdio.h>

void main(){
	int ln2 ,ln1;
	printf("Enter size of array1 and array2 :\n");
	scanf("%d%d",&ln1,&ln2);

	int arr1[ln1];
	printf("Enter the %d element from 1st array\n",ln1);
	for(int i=0;i<ln1;i++){
		scanf("%d",&arr1[i]);
	}
	
	int arr2[ln2];
	printf("Enter %d element of 2nd array :\n",ln2);
	for(int i=0;i<ln2;i++){
		scanf("%d",&arr2[i]);
	}

	int arr3[ln1+ln2];
	int i=0;
	
	for(int j=0;j<ln1;j++){
		arr3[i]=arr1[j];
		i++;
	}
	for(int k=0;k<ln2;k++){
		arr3[i]=arr2[k];
		i++;
	}
	int temp=0;
	for(int i=0;i<ln1+ln2;i++){
		for(int j=i+1;j<ln1+ln2;j++){
			if(arr3[i]>arr3[j]){
				temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	
	}
	printf("Merged array is : \n");
	for(int i=0;i<ln2+ln1;i++){
		printf("%d\n",arr3[i]);
	
	}

}
