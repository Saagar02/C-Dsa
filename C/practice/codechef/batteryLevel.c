/*Chef's phone shows a Battery Low notification if the battery level is 15%15% or less.

Given that the battery level of Chef's phone is X%X%, determine whether it would show a Battery low notification*/
#include<stdio.h>
int main(void ){
	int x;
	scanf("%d",&x);
	x<=15?printf("Yes\n"):printf("No\n");
	return 0;

}
