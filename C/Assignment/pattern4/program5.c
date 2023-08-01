
/*  Q5)
 * 	a  b  c  
	d  e  f  
	g  h  i  
*/

#include<stdio.h>

void main(){
	printf("Enter no fo rows\n");
	int row;
	scanf("%d",&row);

	int var=97;
	for(int i=0;i<row;i++){
		for(int i=0;i<3;i++){
			printf("%c  ",var);
			var++;
		}
		printf("\n");
	}

}
