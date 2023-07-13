/*Chef has decided to go to a gold mine along with NN of his friends (thus, total N+1N+1 people including Chef go to the gold mine).

The gold mine contains a total of XX kg of gold. Every person has the capacity of carrying up atmostatmost YY kg of gold.

Will Chef and his friends together be able to carry up all the gold from the gold mine assuming that they can go to the mine exactly once.*/

#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		(x+1)*z>=y? printf("Yes\n"):printf("No\n");

	}

}
