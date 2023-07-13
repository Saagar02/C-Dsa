/*   Q3)
 *	1  2  3  4  
   	   1  2  3  
              1  2  
                 1 
 */
#include<stdio.h>

void main(){
	int row;	
	printf("Enter the no rows:\n");
	scanf("%d",&row);
	int x=1;
	for(int i=0;i<row;i++){
		int x=1;
		for(int space =0;space<i;space++){
			printf("   ");
		}
		for(int j=row;j>i;j--){
			printf("%d  ",x);
			x++;
		}
		printf("\n");
	
	}


}
