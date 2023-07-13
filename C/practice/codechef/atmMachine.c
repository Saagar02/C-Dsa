/*							ATM MACHINE
 * There is an ATM machine. Initially, it contains a total of KK units of money. NN people (numbered 11 through NN) want to withdraw money; for each valid ii, the ii-th person wants to withdraw AiAi​ units of money.

The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.

For each person, determine whether they will get the required amount of money or not.*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int N;
		scanf("%d",&N);
		int K;
		scanf("%d",&K);
	
		int arr[N];
		for(int i=0;i<N;i++){
			scanf("%d",&arr[i]);
		}
        	int i=0;
		for(i=0;i<N;i++){
        		if(arr[i]<= K){
       				K = K-arr[i];
                       		printf("1");
                	}else{
                        	printf("0");
                	}
       		}
		printf("\n");

	}
}
