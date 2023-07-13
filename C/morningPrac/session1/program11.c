/*  Q11)
 * 	1 2 3 4 
	a b c d 
	5 6 7 8 
	e f g h 
*/
#include<stdio.h>

void main(){
	printf("Enter no fo rows\n");
	int row;
	scanf("%d",&row);
	int x=1;
	int y=97;
	for(int i=1;i<=row;i++){
		for(int j=0;j<4;j++){
			if(i%2!=0){
				printf("%d ",x);
				x++;
			}else{
				printf("%c ",y);
				y++;
			}	
		}
		printf("\n");
	}

}
