/*Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has XX GB of space remaining. His friend has NN movies represented with (Si,Ri)(Si​,Ri​) representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.*/

#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n,x;
		scanf("%d%d",&n,&x);

		int space[n];
		int rating[n];
		for(int i=0;i<n;i++){
			scanf("%d",&space[i]);
			scanf("%d",&rating[i]);
		}
		int maxR = rating[0];
		for(int i=0;i<n;i++){
			if(space[i]<=x && maxR<rating[i]){
				maxR = rating[i];
			}
		
		}
		printf("%d\n",maxR);
	}

}
