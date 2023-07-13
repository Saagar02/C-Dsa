/*N teams have come to participate in a competitive coding event called “Binary Battles”. It is a single-elimination tournament consisting of several rounds.

Note: It is known that NN is a power of 22.

In one round, each team will be paired up with and compete against one of the other teams. If there are XX teams before the start of a round, X22X​ matches are held simultaneously during the round between X22X​ pairs of teams. The winning team of each match will move on to the next round, while the losing team of each match will be eliminated. There are no ties involved. The next round will then take place in the same format between the remaining teams. The process will continue until only one team remains, which will be declared the overall winner.

The organizers want to find the total time the event will take to complete. It is given that each round spans AA minutes, and that there is a break of BB minutes between every two rounds (no break after the last round).

For example, consider a case when N=4N=4, A=10A=10 and B=5B=5. The first round will consist of two matches and will take 1010 minutes to complete. Two teams move on to round 2 and the other two get eliminated. Then there is a break of 55 minutes. The two remaining teams compete in round 2, which lasts 1010 more minutes. The team that wins is declared the overall winner. Thus the total time taken is 10+5+10=2510+5+10=25 minutes.*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,a,b;
		int time = 0;
		scanf("%d%d%d",&n,&a,&b);
		while(n>1){
			n = n/2;
			time = time+a+b;
		}
		printf("%d\n",time-b);
		
	}


}
