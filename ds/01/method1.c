#include<stdio.h>
void method2(){
	
	printf("start method2()\n");
	printf("end method2)\n");

}
void method1();
void main(){
	printf("start main()\n");
	method1();
	printf("end main()\n");
}

void method1(){

	printf("start method1()()\n");
	method2();
	printf("end method1()\n");
}
