/*  Q10)
 *	10  
	I  H  
	7  6  5  
	D  C  B  A 
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows:\n");
	scanf("%d",&row);
	int x=10;
	for(int i=0;i<row;i++){
		for(int j=0;j<=i;j++){
			if(i%2==0){
				printf("%d  ",x);
			}else{
				printf("%c  ",x+64);
			}
			x--;
		}
		printf("\n");
	}
}
