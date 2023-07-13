#include<stdio.h>
#include "myheader.h"

void main(){

	void (*ptr[4])(int ,int )={add,sub,mult,div};
	int x;
	printf("Enter value of x :\n");
	scanf("%d",&x);

	int y ;
	printf("Enter value of y : \n");
	scanf("%d",&y);

	for(int i=0;i<4;i++){
		ptr[i](x,y);
	
	}

}
