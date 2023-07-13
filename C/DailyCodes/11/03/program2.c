			/*			Array of Structure				*/
#include<stdio.h>
struct player{
	char pName[20];
	int jerNo;
	float rev;
};

void main(){
	struct player obj1 = {"Messi",10,4580.50};
	struct player obj2 = {"James",6,9500.50};
	struct player obj3 = {"Virat",18,980.50};

	struct player arr[3] = {obj1,obj2,obj3};

	for(int i=0;i<3;i++){
		printf("%s\n",arr[i].pName);
		printf("%d\n",arr[i].jerNo);
		printf("%f\n",arr[i].rev);
		printf("\n");
	}
}

