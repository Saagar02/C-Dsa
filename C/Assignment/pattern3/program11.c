#include<stdio.h>
void main(){
	int x=16;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(i%2==1){
				printf("%d ",x);
			}
			else{
				printf("%c ",64+x);
			}
			x--;

		}	
		printf("\n");	
	
	}
}
