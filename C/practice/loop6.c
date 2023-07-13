#include <stdio.h>

void main(){
	int var =1;
	char ch ='a';
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(j%2==1){
				printf(" %d", var);
				var++;
			}else{
				printf(" %c",ch);
				ch++;
			}
			
		}
		printf(" \n");
	}


}
