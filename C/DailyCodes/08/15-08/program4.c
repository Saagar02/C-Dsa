#include <stdio.h>

void main(){
	int x =0 ;
	int y =5 ;
	int ans;

	ans = x++ || --x ;  // 0 || 0  F || F = F
	printf("%d\n",ans); // 0
	printf("%d\n",x);   // 0
	printf("%d\n",y);   // 5

	ans = x && --y ;     // 0  here we got first value as F hence AND operator will not involk 2nd value
	printf("%d\n",ans);  // 0
	printf("%d\n",x);    // 0
	printf("%d\n",y);    // 5
}
