/*			Q3)	
 *					 1  
				      1  2  1  
   				   1  2  3  2  1  
				1  2  3  4  3  2  1  


 
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of row\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int space=row;space>i;space--){
			printf("   ");
		}
		int x=1;
		for(int j=1;j<=i*2-1;j++){
			if(j<i){
				printf("%d  ",x);
				x++;	
			}else{
				printf("%d  ",x);
				x--;
			}
		}
		printf("\n");
	}

}
