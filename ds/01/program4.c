/*						MALLOC				*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct OTT{
	char pname[10];
	int count;
	float price;
};
void main(){
	struct OTT *ptr1 = (struct OTT*) malloc(sizeof(struct OTT));

	strcpy(ptr1->pname,"Prime");
	ptr1->count = 1000000;
	ptr1->price = 350.00;

	
	struct OTT *ptr2 = (struct OTT*) malloc(sizeof(struct OTT));

	strcpy(ptr2->pname,"Netflix");
	ptr2->count = 5000000;
	ptr2->price = 750.00;

	printf("%s\n",ptr1->pname);
	printf("%d\n",ptr1->count);
	printf("%f\n",ptr1->price);

	printf("%s\n",ptr2->pname);
	printf("%d\n",ptr2->count);
	printf("%f\n",ptr2->price);

}

