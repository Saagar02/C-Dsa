#include <stdio.h>

void main(){
	int x = 0 ;
	int y = 5;
	int ans ;

	ans = x++ || ++y ;  // 0 || 6  F || T = T
	printf("%d\n",ans); // 1
	printf("%d\n",x);   // 1
	printf("%d\n",y);   // 6

	ans = x++ && y++ ;  // 1 && 6 T && T =  T
	printf("%d\n",ans); // 1
	printf("%d\n",x);   // 2
	printf("%d\n",y);   // 7

}
