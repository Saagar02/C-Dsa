/*			Q9)
 *
 *				A0	B1	C2	D3	E4	F5	G6	
					H2	I3	J4	K5	L6	
						M4	N5	O6	
							P6
*/
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	int x=0;
	int y=65;
	int z=0;
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
			printf("	");
		}
		for(int j=row*2-i;j>=i;j--){
			printf("%c%d	",y,x);
			x++;
			y++;	
		}
		z+=2;
		x=z;
		printf("\n");
	}
}
