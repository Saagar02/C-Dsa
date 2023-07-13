/*WAP to create 3-D array of length given by user and print the sum of all left diagonal element*/
#include<stdio.h>

void main(){
	int row,col,plane;
	printf("Enter size of plane,row,col of array :\n");
	scanf("%d%d%d",&plane,&row,&col);
	int sum=0;
	int arr[plane][row][col];
	printf("Enter array elements\n");
	for(int k=0;k<plane;k++){
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				scanf("%d",&arr[k][i][j]);
				if(i==j){
					sum = sum+arr[k][i][j];
				}
			}
		}
	}
	printf("Sum of all left diagonal element is %d\n",sum);
}
