/*Once, after a stressful day, Chef decided to relax and visit a casino near his house to gamble. He feels lucky and he's going to bet almost all of his money.

The game Chef is going to play in the casino consists of tossing a die with NN faces twice. There is a number written on each face of the die (these numbers are not necessarily distinct). In order to win, Chef must get the number AA on the first toss and the number BB on the second toss of the die.

The excited viewers want to know the probability that Chef will win the game. Can you help them find that number? Assume that Chef gets each face of the die with the same probability on each toss and that tosses are mutually independent.*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n,a,b;
		scanf("%d%d%d",&n,&a,&b);

		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		float count1=0,count2=0;
		for(int i=0;i<n;i++){
			if(arr[i]==a){
				count1++;
			}
			if(arr[i]==b){
				count2++;
			}
		}
		float pp1 = count1/n;
		float pp2  = count2/n;
		float tp =pp1*pp2;
	
		printf("%f\n",tp);
	}

}
