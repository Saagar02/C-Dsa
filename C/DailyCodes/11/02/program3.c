#include<stdio.h>
#include<string.h>

struct book{
	char bName[20];
	int chapC;
	float price;
};
char *myStrcpy(char *dest , char *src){
	while(*src!='\0'){
		*dest = *src;
		dest++;
		src++;
	}
	src = '\0';
	return src;
}
void main(){
	struct book cBhagat = {"3MistakesOfmyLife",16,120.56};

	struct book jkr;
	printf("Enter the book name \n");
	gets(jkr.bName);
	//myStrcpy(jkr.bName,gets());
	printf("Enter no of chapters\n");
	scanf("%d",&jkr.chapC);
	printf("Enter the price of book\n");
	scanf("%f",&jkr.price);


	printf("%s\n",cBhagat.bName);
	printf("%d\n",cBhagat.chapC);
	printf("%f\n",cBhagat.price);
	printf("\n");
	printf("%s\n",jkr.bName);
	printf("%d\n",jkr.chapC);
	printf("%f\n",jkr.price);


}

