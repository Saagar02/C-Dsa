/* Q6)
 * 	1  1  1  
	2  2  2  
	3  3  3  
*/
#include<stdio.h>

void main(){
	printf("Enter no fo rows\n");
	int row;
	scanf("%d",&row);

	
	for(int i=1;i<=row;i++){
		for(int j=0;j<3;j++){
			printf("%d  ",i);
	
		}
		printf("\n");
	}

}
