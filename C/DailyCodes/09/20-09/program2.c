#include<stdio.h>

void main(){
	int row,col;
	printf("Enter the no of rows & colum: ");
	scanf("%d %d",&row,&col);
	
	int arr[row][col];
	printf("Enter the elements of array : \n");
	int sum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			if(i==j){
				sum=sum+arr[i][j];
			}
		}
	}
	printf("Sum of array element is : %d\n",sum);

}
