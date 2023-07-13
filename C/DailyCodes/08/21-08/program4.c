#include <stdio.h>

void main(){
	int x ;
	printf("Enter the value :");
	scanf("%d",&x);

	switch(x){
		case 65 :
			printf("value of x is 65\n");
			break;
	
         /*	case 'A' :                                  // Error
			printf("value of x is 65\n");
			break;*/
		case 66 :
			printf("value of x is 66\n");
			break;
	/*	case 'B' :                                 // Error
			printf("value of x is 66\n");
			break;*/
		defalut :
			printf("Wrong Input ");
			break;
	}

}
