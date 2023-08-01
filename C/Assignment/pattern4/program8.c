/* Q8)
 * 	9  8  7  
	6  5  4  
	3  2  1  */
#include<stdio.h>

void main(){
	printf("Enter no fo rows\n");
	int row;
	scanf("%d",&row);

	int x = row*3;	
	for(int i=row;i>=1;i--){
		for(int j=0;j<3;j++){
			printf("%d  ",x);
			x--;
		}
		printf("\n");
	}

}
