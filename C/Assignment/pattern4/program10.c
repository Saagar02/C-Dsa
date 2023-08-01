/*
    Q10)
  	1 3 5 
	7 9 11 
	13 15 17 
*/



#include<stdio.h>

void main(){
	printf("Enter no fo rows\n");
	int row;
	scanf("%d",&row);
	int x=1;
	for(int i=1;i<=row;i++){
		for(int j=0;j<3;j++){
			printf("%d ",x);
			x+=2;	
		}
		printf("\n");
	}

}
