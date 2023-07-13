#include<stdio.h>
void main(){
	int x =5;
	int ans = x++ + ++x + x++;
	printf("%d\n",ans);
	printf("%d\n",x);

}
