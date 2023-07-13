/*    Q10)
 * 	1 3 5 
	5 7 9 
	9 11 13 
	*/
#include<stdio.h>

void main(){
	int ch=1;
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int j=0;j<3;j++){
			printf("%d ",ch);
			ch+=2;
		}
		ch=ch-2;
		printf("\n");
	
	}

}
