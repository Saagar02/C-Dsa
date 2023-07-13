#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct company{
	char cname[10];
	int ecount;
	float revenue;
};

void main(){
	struct company *ptr1 = (struct company*) malloc(sizeof(struct company));

	strcpy(ptr1->cname,"Veritas");
	ptr1->ecount=700;
	ptr1->revenue=150.00;
	struct company *ptr2 = (struct company*) malloc(sizeof(struct company));

	strcpy(ptr2->cname,"Jio");
	ptr2->ecount=7000;
	ptr2->revenue=1500.00;

	printf("%s\n",ptr2->cname);
	printf("%d\n",ptr2->ecount);
	printf("%f\n",ptr2->revenue);

}
