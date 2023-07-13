/*There are NN students standing in a row and numbered 11 through NN from left to right. You are given a string SS with length NN, where for each valid ii, the ii-th character of SS is 'x' if the ii-th student is a girl or 'y' if this student is a boy. Students standing next to each other in the row are friends.

The students are asked to form pairs for a dance competition. Each pair must consist of a boy and a girl. Two students can only form a pair if they are friends. Each student can only be part of at most one pair. What is the maximum number of pairs that can be formed?*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		
		char carr[1000];
		scanf("%s",carr);
		int count1=0;
		int count2=0;
		for(int i=0 ;i<1000;i++){
			
			if(carr[i]=='x'){
				count1++;
			}else if (carr[i]=='y'){
				count2++;
			}else{
				count1=0;
				count2=0;
			}
		}
		printf("count of x = %d\n",count1);
		printf("count of y = %d\n",count2);
		if(count1<count2){
			printf("%d\n",count1);
		}else{
			printf("%d\n",count2);
		}
	}


}
