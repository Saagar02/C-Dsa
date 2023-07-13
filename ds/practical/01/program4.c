/*WAP to dynamically allocate 3D array of marks, take value from user and printf it [use malloc]*/
#include<stdio.h>
#include<stdlib.h>
void main(){
	int plane;
	int row;
	int col;

	scanf("%d%d%d",&plane,&row,&col);
	int size = (row*col)*plane;
	printf("%d\n",size);
	int *ptr = (int *)malloc(size*sizeof(int));

	printf("Enter the %d elements\n",size);
	for(int i=0;i<size;i++){
		scanf("%d",ptr+i);
	}
	printf("3D array is :\n");
	for(int k=0;k<plane;k++){
		printf("plane no = %d\n",k+1);
		int st = row*col;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				printf("%d ",*(ptr+(st*k)+(col*i)+j));
			}
			printf("\n");
		}
	}
	for(int i=0;i<size;i++){
		free(ptr[i]);
	}
	free(ptr);
}
