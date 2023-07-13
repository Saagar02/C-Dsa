/*Chef is currently facing the north direction. Each second he rotates exactly 90 degrees in clockwise direction. Find the direction in which Chef is facing after exactly XX seconds.*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int sec;
		scanf("%d",&sec);
		int div = sec%4;
		if(div == 0){
			printf("North\n");
		}else if(div == 1){
			printf("East\n");
		}else if(div == 2){
			printf("South\n");
		}else if(div == 3){
			printf("West\n");
		}

	
	}


}
