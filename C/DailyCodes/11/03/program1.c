			/*			Pointer to Structure				*/
#include<stdio.h>
struct movie{
	char mName[20];
	int count;
	float price;
}obj1={"Tumbbad",5,1000.500};

void main(){
	struct movie *ptr = &obj1;

	printf("%s\n",obj1.mName);
	printf("%d\n",obj1.count);
	printf("%f\n",obj1.price);
	printf("\n");
	printf("%s\n",(*ptr).mName);
	printf("%d\n",ptr->count);
	printf("%f\n",ptr->price);



}

