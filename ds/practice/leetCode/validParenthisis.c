#include<stdio.h>
#include<stdbool.h>
bool validParenthisis(char *str, int size ){
	int cu =0;	
	int sq =0;	
	int rd =0;
//	int count=0;
	while(*str!='\0'){
		/*if(*(str) == '{' || *(str) =='('||(*str)=='['){
			count ++;
		}
		if(*str == '}' || *str ==')'||*str==']'){
			count --;
		}*/
		switch(*str){
			case '{':
				cu++;
				break;
			case '}':{	
					str--;
					if(*str == '{'){
						cu--;
					}
					str++;
					break;
				 }
			case '[':
				sq++;
				break;
			case ']':{{	
					str--;
					if(*str == ']'){
						cu--;
					}
					str++;
					break;
				 }
			case '(':{
				printf("rd++");
				rd++;
				break;
				 }
			case ')':{
				printf("rd--");
				rd--;
				break;
				 }
		//	defalut :
		//		 str++;
		}
		str++;
	}

	if(cu ==0 && rd==0 && sq==0){
		return true;
	}else{
		return false;
	}
}
void main(){
	int size=0;
//	scanf("%d",&size);
	char* str = "(}";
	bool no =validParenthisis(str,3);
	printf("%d",no);
}
