/*You and your friend are playing a game with hoops. There are NN hoops (where NN is odd) in a row. You jump into hoop 11, and your friend jumps into hoop NN. Then you jump into hoop 22, and after that, your friend jumps into hoop N−1N−1, and so on.

The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		int a=1,b=n;
		while(a!=b){
			a++;b--;
		}
		printf("%d\n",a);

	}

}
