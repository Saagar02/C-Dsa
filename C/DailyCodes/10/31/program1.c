/*Q1) WAP to allocate memory of float type , take value from user and print it .Use malloc*/
#include<stdio.h>
#include<stdlib.h>
void main(){
	float *ptr = (float *)malloc(sizeof(float));
	printf("Enter float value\n");
	scanf("%f",ptr);
	printf("%f",*ptr);

}
