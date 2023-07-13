							/*Structure Assignment*/

#include<stdio.h>

struct CricPlayer{
	char pName[20];
	int jrNo;
	float avg;
};
void main(){
	struct CricPlayer obj = {"Virat",18,50.33};

	printf("%s\n",obj.pName);
	printf("%d\n",obj.jrNo);
	printf("%f\n",obj.avg);

	struct CricPlayer obj1 = {"MSD",7,45.33};

	printf("%s\n",obj1.pName);
	printf("%d\n",obj1.jrNo);
	printf("%f\n",obj1.avg);

}
