/*
	$ = $ =
	$ = $ =
	$ = $ =
	$ = $ = 
*/
# include <stdio.h>

void main(){
	int row;
	printf("Enter the number of rows : \n");
	scanf("%d",&row);

	int col;
	printf("Enter the number of colum : \n");
	scanf("%d",&col);

	for(int i=1;i<=row;i++){
	
		for(int j=1;j<=col;j++){
			if(j%2==0){
				printf("= ");
			}else{
				printf("$ ");
			}
		}
		printf("\n");
	
	}


}
