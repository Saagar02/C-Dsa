#include<stdio.h>

void main(){
	int row = 4;
	
	for(int i=1;i<=row;i++){
		for(int space=row;space>i;space--){
			printf("  ");
		}
		int ch =96+i;
		int ch1 = 64+i;
		for(int j=1;j<=i;j++){
			
			if(i%2==0){
				printf("%c ",ch);
				ch--;
			}else{
				printf("%c ",ch1);
				ch1 = ch1+2;
			}
		}
		printf("\n");
	}


}
