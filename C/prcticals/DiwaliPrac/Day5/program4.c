/*4.)WAP for concept of passing function to function*/
#include<stdio.h>

float mult(float x , float y){
	float mult = x*y;
}
float div (float x , float y , float (*ptr)(float , float )){

	printf("%f\n",ptr(x,y));
	float div = x/y;
	return div;

}
void main(){
	float x,y;
	printf("Enter the value of x and y\n");
	scanf("%f%f",&x,&y);
	printf("%f\n",div(x,y,mult));
}
