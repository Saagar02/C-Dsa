/*WAP to dynamically allocate 2D array of marks, take value from user and printf it [use malloc]*/

#include<stdio.h>
#include<stdlib.h>
void main(){

	int row;
	int col;
	printf("Enter row and col\n");
	scanf("%d%d",&row,&col);
	int size = row*col;

	int *ptr =(int *)malloc(size*sizeof(int));

	for(int i=0;i<size;i++){
		scanf("%d",ptr+i);
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",*((ptr+i*col)+j));
		}
		printf("\n");		
	
	}
	for(int i=0;i<size;i++){
		free(ptr[i]);
	}
	free(ptr);

}
