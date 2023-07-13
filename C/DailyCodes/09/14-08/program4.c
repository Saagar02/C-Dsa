#include <stdio.h>

void main(){
	int x =8;
	int ans;

	ans= x++ + ++x ;

	printf("%d\n",x);
	printf("%d\n",ans);

}
