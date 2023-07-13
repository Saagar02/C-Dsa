#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct employee{
	int empId;
	char empName[20];
	float sal;
	struct employee *next;
}emp;

void main(){
	emp *emp1 = (emp*)malloc(sizeof(emp));
	emp *emp2 = (emp*)malloc(sizeof(emp));
	emp *emp3 = (emp*)malloc(sizeof(emp));

	emp1 ->  empId =1;
	strcpy(emp1->empName,"Kanha");
	emp1->sal = 60.00;
	emp1->next = emp2;
	
	emp2 ->  empId =2;
	strcpy(emp2->empName,"Kanha");
	emp2->sal = 60.00;
	emp2->next = emp3;

	emp3 ->  empId =3;
	strcpy(emp1->empName,"Kanha");
	emp3->sal = 60.00;
	emp3->next = NULL;

	while(emp1!=NULL){
		printf("%d\n",emp1->empId);
		printf("%s\n",emp1->empName);
		printf("%f\n",emp1->sal);
		emp1 = emp1->next;
	}

}
