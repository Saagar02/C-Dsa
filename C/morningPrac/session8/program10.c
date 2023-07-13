/*				Q10)
 *					*	*	*	#	*	*	*	
						*	*	#	*	*	
							*	#	*	
								#
*/

#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
			printf("	");
		}
		for(int j=row*2-i;j>=i;j--){
			if(j!=row){
				printf("*	");
			}else{
				printf("#	");
			}
		}
		printf("\n");
	}

}
