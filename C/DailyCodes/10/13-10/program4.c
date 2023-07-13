/*								My strlen					*/
#include<stdio.h>
int mystrlen(char *cptr){
	int count;
	while(*cptr!='\0'){
		count ++;
		cptr++;
	}
	return count;
}
void main(){
	char *cptr = "Sagar Chaudhari";
	int mylen = mystrlen(cptr);
	printf("%d\n",mylen);

}
