/*  Q3)
 * 	* * * 
	* * * 
	* * * 
*/

#include<stdio.h>

void main(){
	printf("Enter no fo rows\n");
	int row;
	scanf("%d",&row);

	
	for(int i=0;i<row;i++){
		for(int i=0;i<3;i++){
			printf("* ");
		}
		printf("\n");
	}

}
