#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--){
	int x,y;
	scanf("%d%d",&x,&y);
	    if((2*x)>(5*y)){
	        printf("Chocolate\n");
	    }else if((2*x)<(5*y)){
	        printf("Candy\n");
	    }else{
	        printf("Either\n");
	    }
	}
	return 0;
}

