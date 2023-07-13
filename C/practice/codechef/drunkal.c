/**Faizal is very sad after finding out that he is responsible for Sardar's death. He tries to drown his sorrows in alcohol and gets very drunk. Now he wants to return home but is unable to walk straight. For every 33 steps forward, he ends up walking one step backward.

Formally, in the 1st1st second he moves 33 steps forward, in the 2nd2nd second he moves 11 step backwards, in the 3rd3rd second he moves 33 steps forward, in 4th4th second 11 step backwards, and so on.

How far from his initial position will Faizal be after kk seconds have passed? Assume that Faizal's initial position is 00.*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int sec;
		scanf("%d",&sec);
		int arr[sec];
		for(int i=0;i<sec;i++){
			arr[i] = i+1;
		}
		int steps =0;
		for(int i=0;i<sec;i++){
			if(i%2==0){
				steps+=3;	
			}else{
				steps--;
			}
		}
		printf("%d\n",steps);
	}

}
