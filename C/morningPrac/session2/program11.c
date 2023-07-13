/*    Q11)
 * 	1 2 3 4 
	a b c d 
	# # # # 
	5 6 7 8 
	e f g h 
	# # # # 
 
	*/
#include<stdio.h>

void main(){
	int ch=97;
	int x =1;
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=0;j<4;j++){
			if(i%3==2){
				printf("%c ",ch);
				ch++;
			}else if (i%3==1){
				printf("%d ",x);
				x++;
			}else{
				printf("# ");
			}
			
		}
		printf("\n");
	
	}

}
