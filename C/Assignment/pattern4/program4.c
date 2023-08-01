/*  Q4)
 * 	1  2  3  4  
	5  6  7  8  
	9  10  11  12 */
#include<stdio.h>

void main(){
	printf("Enter no of rows & column\n");
	int row ,col;
	scanf("%d%d",&row,&col);

	int x =1;
	for(int i=1;i<=row;i++){
		for(int j=0;j<col;j++){
			printf("%d  ",x);
			x++;	
		}
		printf("\n");
	}

}
