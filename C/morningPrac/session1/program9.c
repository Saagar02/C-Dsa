/* Q9)
 * 	A  A  A  
	B  B  B  
	C  C  C */
#include<stdio.h>

void main(){
	printf("Enter no fo rows\n");
	int row;
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=0;j<3;j++){
			printf("%c  ",i+64);
		}
		printf("\n");
	}

}
