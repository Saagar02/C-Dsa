#include<stdio.h>
#include<string.h>

struct picnic{
	char location[20];
	int headC;
	float distance;
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
	struct picnic obj1 = {"Goa",5,460.50};	//First method to assign value to structure.

	struct picnic obj2;
	char *str1 = "Kashmir";
	char str2[20];
						// Second method to assign value to structure.
	myStrcpy(obj2.location,"Kashmir");	// we cannot assign string like this obj2.loction = "Kashmir" 
						// because string is constant and cannot assign it so we use
						// strcpy function .
	obj2.headC = 2;
	obj2.distance = 1200.450;


	printf("%s\n",obj1.location);
	printf("%d\n",obj1.headC);
	printf("%f\n",obj1.distance);
	printf("\n");
	printf("%s\n",obj2.location);
	printf("%d\n",obj2.headC);
	printf("%f\n",obj2.distance);


}

