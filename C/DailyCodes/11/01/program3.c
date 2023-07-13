# include<stdio.h>
# pragma pack(1)
							/*Size of Structure using pragma pack*/

struct Demo{
	int jrNo;
	float avg;
	double grade;
};

struct Demo1{
	int jrNo;
	double grade;
	float avg;
};
struct Demo2{
	int jrNo;
	char ch;
	float avg;
	double grade1;

};
struct Demo3{
	float f;
	char *ch;
	int x;
	int y;
};
struct Demo4{
	char ch;
	int x;
	float y;
	char arr[10];
};

void main(){
	struct Demo obj;
	printf("Demo =%ld\n",sizeof(obj));	//16
	struct Demo1 obj1;
	printf("Demo 1 =%ld\n",sizeof(obj1));	//16
	struct Demo2 obj2;
	printf("Demo 2 =%ld\n",sizeof(obj2));	//17
	struct Demo3 obj3;
	printf("Demo 3 =%ld\n",sizeof(obj3));	//20
	struct Demo4 obj4;
	printf("Demo 4 =%ld\n",sizeof(obj4));	//19
}
