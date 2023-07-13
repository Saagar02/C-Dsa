/*	1 4 3 
	16 5 36 
	7 64 9 
	100 11 144 
*/
#include<stdio.h>
void main(){
	int row;
	printf("Enterr the no of rows :");
	scanf("%d",&row);
	
	int var=1;
	int var1=1;
	for(int i=1;i<=row;i++){
		var=var1;
		for(int j=1;j<=3;j++){
			
			if(var1%2==0){
				printf("%d ",var*var);
		
			}else{
				printf("%d ",var);
	
			}
			var1++;	
			var++;
		}
		printf("\n");
	}

}
