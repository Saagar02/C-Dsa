/*	3 b 1 d 
	a 2 c 0 
	3 b 1 d 
	a 2 c 0 */
#include<stdio.h>
void main(){
	int row;
	printf("Enterr the no of rows :");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		int var=97;
		int var1=3;
		for(int j=1;j<=4;j++){
			if(i%2!=0){
			if(j%2==0){
					printf("%c ",var);
				}else{
					printf("%d ",var1);
			}
				var++;
				var1--;
			}else{
				if(j%2==0){
					printf("%d ",var1);
				}else{
					printf("%c ",var);
				}
				var++;
				var1--;
			}
	
		}
		printf("\n");
	}

}
