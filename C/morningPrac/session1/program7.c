/*   Q7)
 * 	4  4  4  4  
	3  3  3  3  
	2  2  2  2  
	1  1  1  1  */

#include<stdio.h>

void main(){
	printf("Enter no fo rows\n");
	int row;
	scanf("%d",&row);

	
	for(int i=row;i>=1;i--){
		for(int j=0;j<4;j++){
			printf("%d  ",i);
	
		}
		printf("\n");
	}

}
