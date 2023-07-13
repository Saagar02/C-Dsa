/*You are participating in a contest which has 1111 problems (numbered 11 through 1111). The first eight problems (i.e. problems 1,2,…,81,2,…,8) are scorable, while the last three problems (99, 1010 and 1111) are non-scorable ― this means that any submissions you make on any of these problems do not affect your total score.

Your total score is the sum of your best scores for all scorable problems. That is, for each scorable problem, you look at the scores of all submissions you made on that problem and take the maximum of these scores (or 00 if you didn't make any submissions on that problem); the total score is the sum of the maximum scores you took.

You know the results of all submissions you made. Calculate your total score.*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		int score[n];
		int qno[n];

		for(int i=0;i<n;i++){
			scanf("%d",&qno[i]);
			scanf("%d",&score[i]);
		}
		for(int i=0;i<n;i++){
			printf("score = %d\n",score[i]);
		}
		int totals = 0;
		int n1=0;
		int arr[n1];
		int count =0;
		for(int i=0;i<n;i++){
			for(int k=i+1;k<n;k++){
				if(qno[i]==qno[k]){
					count ++;
					break;
				}
			}
			for(int j=i+1;j<n;j++){
				if(qno[i]==qno[j]){
					printf("IN first IF\n");
					if(score[i]<score[j]){
						printf("inIF\n");
						score[i]=score[j];
						arr[i] = score[j];
					}
				}else{
					arr[i] = score[i];
				}
			//	arr[i] = score[i];
			}	
//			arr[i]=score[i];
			n1++;
		}

		printf("%d\n",count);
		for(int i=0;i<n1;i++){
			//totals = totals + arr[i];
			printf("new score %d = %d\n",i,arr[i]);
		}

	//	printf("%d\n",totals);
	
	}


}
