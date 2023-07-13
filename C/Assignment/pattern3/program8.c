/*	16 15 14 13 
	L  K  J  I 
	8  7  6  5 
	D  C  B  A 
*/

#include<stdio.h>
void main(){
	int row;
	printf("Enterr the no of rows :");
	scanf("%d",&row);
	
	int var=16;
	for(int i=1;i<=row;i++){

		for(int j=1;j<=4;j++){
			
			if(i%2!=0){
				printf("%d ",var);
			}else{
				printf("%c ",var+64);
			}
			var--;	
		}
		printf("\n");
	}

}
