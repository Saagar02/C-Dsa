#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
	int empId;
	char compName[20];
	float sal;
	struct emplyee *next;
}emp;

void main(){
	emp *emp1 = (emp*)malloc(sizeof(emp));
	emp *emp2 = (emp*)malloc(sizeof(emp));
	emp *emp3 = (emp*)malloc(sizeof(emp));

}
