#include<stdio.h>
int row ;
int col;
int rotate(int arr[row][col],int arr1[row][col]){

	for(int i = 0; i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j] !=arr1[i][j]){
				return 0;
			}
		
		}
	}
	return 1;
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
	printf("retval = %d",rotate(arr,arr1));
}
