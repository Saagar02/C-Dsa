#include<stdio.h>

void main(){
	int row =4;	
	for(int i=row;i>=1;i--){
		for(int space=1;space<i;space++){
			printf("   ");
		}
		int x=i;
		for(int j=row;j>=i;j--){
			
			printf("%d  ",x);
			x = x+i;
		}
		printf("\n");
	}


}
