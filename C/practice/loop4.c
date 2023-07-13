#include <stdio.h>

void main(){
	char ch = 65 ;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(j%2==1){
				printf(" %c",ch);
			}else{
				printf(" %c",ch+32);
			}
			ch++;
		
		}
		printf(" \n");
	
	}

}
