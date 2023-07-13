			/*			Nested Structure  - Type-2				*/
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
	struct movie obj2 = {"Tumbaad",{"Rishabh",9.2}};	// Initilizing object with values

	printf("%s\n",obj2.mName);
	printf("%s\n",obj2.obj1.actor);
	printf("%f\n",obj2.obj1.imbdRating);
}

