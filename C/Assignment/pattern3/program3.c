/*	4 a 3 b 
	4 a 3 b 
	4 a 3 b 
	4 a 3 b */

#include<stdio.h>
void main(){
	int row;
	printf("Enterr the no of rows :");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		int var=97;
		int var1=4;
		for(int j=1;j<=4;j++){
			if(j%2==0){
				printf("%c ",var);
				var++;
			}else{
				printf("%d ",var1);
				var1--;
			}
			
		}
		
		printf("\n");
	}

}
