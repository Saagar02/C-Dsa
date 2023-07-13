#include <stdio.h>

void main(){
	int var=65;
	int j=4;

	for(int i=1;i<=4;){
		if(j>=i){
			printf("%c ",var);
			j--;
			var++;
		}
		else{
			printf("\n");
			i++;
			j=4;
		}
	
	
	}


}
