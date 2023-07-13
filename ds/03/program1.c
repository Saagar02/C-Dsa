#include<stdio.h>
#include<string.h>
typedef struct employee{
	int empId;
	char empName[20];
	float sal;
	struct employee *next;
}emp;

void main(){
	emp obj1,obj2,obj3;
	emp *head = &obj1;

	obj1.empId = 1;
	strcpy(obj1.empName,"Sagar");
	obj1.sal = 50.00;
	obj1.next = &obj2;

	obj2.empId = 2;
	strcpy(obj2.empName,"Amar");
	obj2.sal = 75.00;
	obj2.next = &obj3;

	obj3.empId = 3;
	strcpy(obj3.empName,"Pratiksha");
	obj3.sal = 100.00;
	obj3.next = NULL;
	
	while(head!=NULL){
		printf("employee ID = %d\n",head->empId);
		printf("employee name = %s\n",head->empName);
		printf("employee sal = %f\n",head->sal);
		
		head = head->next;
	}

}

