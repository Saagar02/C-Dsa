#include<stdio.h>

struct CricPlayer {
	int jerNo;
	float avg;
	char grade;
};
void main(){
	struct CricPlayer vk;
	printf("%ld\n",sizeof(vk));
	printf("%ld\n",sizeof(struct CricPlayer));

}
