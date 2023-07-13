#include<stdio.h>

void main(){
	char ch[] ={'C','o','r','e'};
	int x=0;
	for(int i=1;i<=4;i++){
		for(int j=4;j>=i;j--){
			
			printf("%c",ch[x]);
			x++;
		}
		printf("\n");
	
	}

}
