#include<stdio.h>
#include<stdlib.h>

struct movie{
	char mName[20];
	int noOftick;
	float price;
}obj = {"Kantara",2,300};

void fun(){
	struct movie obj3 = {"TigerMelaAhe",7,1250.504};
	printf("%s\n",obj3.mName);
	printf("%d\n",obj3.noOftick);
	printf("%f\nn",obj3.price);

}
void main(){
	struct movie obj2 = {"Drisham",2,450.504};
	printf("%s\n",obj2.mName);
	printf("%d\n",obj2.noOftick);
	printf("%f\n",obj2.price);
	fun();
		
	printf("%s\n",obj.mName);
	printf("%d\n",obj.noOftick);
	printf("%f\n",obj.price);

}
