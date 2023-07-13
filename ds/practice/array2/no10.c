#include<stdio.h>
int row ;
int col;
void make0(int arr[row][col]){
	for(int i = 0; i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]==0){
				for(int k = 0 ;k<row;k++){
					arr[k][j]=0;
				}
				for(int l = 0 ;l<col;l++){
					arr[i][l]=0;
				}

			}
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("  %d",arr[i][j]);
		}
		printf("\n");
	}
	
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
	make0(arr);
}
