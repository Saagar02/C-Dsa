#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct billingAdd{
	char cname[20];
	int unit;
	float bill;
	double id;

};
void main(){
	struct billingAdd *ptr = (struct billingAdd*)malloc(sizeof(struct billingAdd));

	strcpy(ptr->cname,"Sagar chaudhari");
	ptr->unit = 200;
	ptr->bill = 1200.50;
	ptr->id=1266116516;

	printf("%s\n",ptr->cname);
	printf("%d\n",ptr->unit);
	printf("%f\n",ptr->bill);
	printf("%f\n",ptr->id);
}
