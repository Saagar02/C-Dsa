/*WAP to create 2-D array of size given from user and assign that array to 
 * another array of same size and print the second array*/
#include<stdio.h>

void main(){
	int row , col;
	printf("Enter no of row and col of array \n");
	scanf("%d%d",&row,&col);

	int arr1[row][col];
	int arr2[row][col];
	printf("Enter array element:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr2[i][j]=arr1[i][j];
		}
	}
	printf("Element from 2nd array are :\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d	",arr2[i][j]);
		}
		printf("\n");
	}
}
