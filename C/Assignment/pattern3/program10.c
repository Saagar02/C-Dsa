/*	D1 C2 B3 A4 
	e5 f4 g3 h2 
	F3 E4 D5 C6 
	g7 h6 i5 j4 
*/
#include<stdio.h>

void main(){
	int row ;
	printf("Enter no of rows : ");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		int var = 64+row+i;	
		int var2 =96+row+i;
		for(int j=0;j<row;j++){
			if(i%2==0){
				printf("%c%d ",(var),(i+j+1));
				var--;
			}else{
				printf("%c%d ",(var2),(row+i)-j);
				var2++;
			}		
		
		}
		printf("\n");
	}

}
