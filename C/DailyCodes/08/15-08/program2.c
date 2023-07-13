#include <stdio.h>

void main(){
	int x=8;
	int y=11;
	int ans;

	ans = ++x || ++y;   // 9 here we have first value true , hence OR operator will not involk 2nd value.
	printf("%d\n",ans); // 1
	printf("%d\n",x);   // 9	
	printf("%d\n",y);   // 11

	ans = ++x && ++y;   // 10 && 12  here we have first value true but AND operator will check second value too.
	printf("%d\n",ans); // 1
	printf("%d\n",x);   // 10
	printf("%d\n",y);   // 12

}
