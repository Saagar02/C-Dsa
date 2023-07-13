#include<stdio.h>
int row ;
int col;
int* sumOfArray(int (*arr)[col],int (*arr1)[col],int (*arr2)[col],int row,int col){	
	for(int i = 0; i<row;i++){
		printf("row : %d\n",i);
		for(int j=0;j<col;j++){
			printf("col : %d\n",j);
			arr2[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	return *arr2;
}
void main(){
	printf("Enter the no of row and col\n");
	scanf("%d%d",&row,&col);
	int arr[row][col];
	printf("Enter %d elements of first array\n",row*col);

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int arr1[row][col];
	printf("Enter %d elements of second array\n",row*col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	int arr2[row][col];	
	int (*ptr)[col]  = sumOfArray(arr,arr1,arr2,row,col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",(*(*ptr+i)+j));
		}
		printf("\n");
	}
}
