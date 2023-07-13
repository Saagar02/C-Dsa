#include <stdio.h>

void main(){
	int var=65;
	int j=0;

	for(int i=1;i<=4;){
		if(j<i){
			printf("%c ",var);
			j++;
			var++;
		}
		else{
			printf("\n");
			i++;
			j=0;
		}
	
	
	}


}
