#include<stdio.h>
#include<string.h>

struct cricplayer{
	char pname[10];
	int jreno;
	float sal;
}obj1={"MSD",7,5.00};
void main(){
	struct cricplayer obj2;
	strcpy(obj2.pname,"Rohit");
	obj2.jreno = 45;
	obj2.sal = 5.00;
	
	printf("%s\n",obj2.pname);
	printf("%d\n",obj2.jreno);
	printf("%f\n",obj2.sal);

	printf("%s\n",obj1.pname);
	printf("%d\n",obj1.jreno);
	printf("%f\n",obj1.sal);
}
