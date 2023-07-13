#include <stdio.h>


void main(){

	int x = 5 ;
	int y = 5;
	int ans ;

	printf("%d\n",++x); //6
	printf("%d\n",x); //6


	printf("%d\n",y++); //5
	printf("%d\n",y);//6

	ans = x++;
	printf("%d\n",x);//7
	printf("%d\n",ans);//6

}
