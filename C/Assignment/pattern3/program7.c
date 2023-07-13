/* 
 * 	1	4	27
	4	27	16
	27	16	125
*/
#include<stdio.h>
void main(){
	int row;
	printf("Enterr the no of rows :");
	scanf("%d",&row);
	
	int var =1,var1=1;
	for(int i=1;i<=row;i++){
		var=var1;
		for(int j=1;j<=3;j++){
			if(var%2!=0){
				printf("%d ",var*var*var);
			}else{
				printf("%d ",var*var);
			}
			var++;			
		}
		var1++;
		printf("\n");
		
	}

}
