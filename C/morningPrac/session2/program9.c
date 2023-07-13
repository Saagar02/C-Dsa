/*    Q9)
 * 	A b C 
	D e F 
	G h I  
	*/
#include<stdio.h>

void main(){
	int ch=65;
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int j=0;j<3;j++){
			if(j%2==0){
				printf("%c ",ch);
			}else{
				printf("%c ",ch+32);
			}
			ch++;
		}
		printf("\n");
	
	}

}
