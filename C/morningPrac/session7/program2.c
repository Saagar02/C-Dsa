/*	Q2)
 *			 4  
      		      3  3  3  
   		   2  2  2  2  2  
		1  1  1  1  1  1  1 
 
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int space  = row;
		for(space = row;space>i;space--){
			printf("   ");
		}
		for(int j=1;j<=i*2-1;j++){
			printf("%d  ",5-space);
		}
		printf("\n");
	
	}

}
