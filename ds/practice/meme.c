#include<stdio.h>
#include<stdbool.h>
bool fun(){
	int value = 15;
	if(value == true ){
		return true;
	}else{
		return false;
	}

}
void main(){
	bool ret = fun();
	printf("%d\n",ret);

}
