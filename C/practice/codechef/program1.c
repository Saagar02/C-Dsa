/*There is a group of NN friends who wish to enroll in a course together. The course has a maximum capacity of MM students that can register for it. If there are KK other students who have already enrolled in the course, determine if it will still be possible for all the NN friends to do so or not.*/
#include<stdio.h>
int main(void){
	printf("Enter no of test cases\n");
	int r;
	scanf("%d",&r);
	while(r--){
		printf("Enter no of friends,total no of seats , students who have already resistered\n");
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);

		if(n+k<=m){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;



}
