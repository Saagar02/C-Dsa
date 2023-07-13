/*     	Q1)
 *
 *	            *  
      		 *  *  *  
   	      *  *  *  *  *  
	   *  *  *  *  *  *  * 
*/

#include<stdio.h>
void main(){
	int row;
	printf("Entre no of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int space =row ;space>i;space--){
			printf("   ");
		}
		for(int j=1;j<=i*2-1;j++){
			printf("*  ");
		}
		printf("\n");
	}



}
