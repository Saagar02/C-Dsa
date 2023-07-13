#include <stdio.h>

void main(){
	int x=9 ;
	int ans ;

	ans = ++x + x++ + ++x ;
	printf("ans = %d\n",ans);
	printf("x = %d\n",x);

	int ans1;
	ans1 = ++x + ++x + ++x + ++x;
	printf("ans1 = %d\n",ans1);
	printf("x = %d\n",x);

	int ans2;
	ans2 = x++ + x++ + ++x + x++ + ++x;
	printf("ans2 = %d\n",ans2);
	printf("x = %d\n",x); 

	int ans3;
	ans3 = x++ + x++ + x++ + x++;
	printf("ans3 = %d\n",ans3);
	printf("x =%d\n",x);
}
