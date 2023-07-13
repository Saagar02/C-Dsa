#include<stdio.h>
int row ;
int col;
int *rotate(int arr[row][col]){
	int k=row-1;
/*	for(int i=0;i<row/2;i++){
		for(int j=0;j<col;j++){
			int store = arr[i][j];
			arr[i][j] = arr[k][j];
			arr[k][j] = store;
		}
		k = k-1;
	}*/
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i!=j){
				int store = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = store;
			}
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	
}
void main(){
	printf("Enter the no of row and col\n");
	scanf("%d%d",&row,&col);
	int arr[row][col];
	printf("Enter %d elements\n",row*col);

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	rotate(arr);
}
