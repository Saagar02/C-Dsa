/*	a B c D 
	b C d E 
	c D e F 
	d E f G 
*/

#include<stdio.h>
void main(){
	int row;
	printf("Enterr the no of rows :");
	scanf("%d",&row);
	
	int var=97,var1=97;
	for(int i=1;i<=row;i++){
		var=var1;
		for(int j=1;j<=4;j++){
			
			if(j%2==0){
				printf("%c ",var-32);
		
			}else{
				printf("%c ",var);
	
			}
			var++;	
		}
		var1++;
		printf("\n");
	}

}
