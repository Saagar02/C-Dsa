/*	= = = = 
	$ $ $ $ 
	@ @ @ @ 
	= = = = 
	$ $ $ $ 
	@ @ @ @ 
*/
#include<stdio.h>
void main(){
	int row;
	printf("Enterr the no of rows :");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){

		for(int j=1;j<=4;j++){
			if(i%3==1){
				printf("= ");
			}else if(i%3==2){
				printf("$ ");
			}else{
				printf("@ ");
			} 		
			
		}
		printf("\n");
	}

}
