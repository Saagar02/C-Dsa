/* Q4)
 	 	             4  
      			  4  3  4  
  		       4  3  2  3  4  
		    4  3  2  1  2  3  4  
 */
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x = row;
		for(int space=row;space>i;space--){
			printf("   ");
		}
		for(int j=1;j<=i*2-1;j++){
			if(j<i){
				printf("%d  ",x--);
		
			}else{
				printf("%d  ",x++);
			}
		}
		printf("\n");
	
	}

}
