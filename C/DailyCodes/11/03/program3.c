			/*			Nested Structure  - Type-1				*/
#include<stdio.h>
#include<string.h>
struct movieInfo{				// Inner struct but wrting it outside
	char actor[20];
	float imbdRating;
};
struct movie{
	char mName[20];
	struct movieInfo obj1;			// object of inner struct is created
	
};

void main(){
	struct movie obj2;

	strcpy(obj2.mName,"Kantaara");
	strcpy(obj2.obj1.actor,"Rishabh");
	obj2.obj1.imbdRating = 9.2;

	printf("%s\n",obj2.mName);
	printf("%s\n",obj2.obj1.actor);
	printf("%f\n",obj2.obj1.imbdRating);
}

