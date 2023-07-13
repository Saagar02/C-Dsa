#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
	char *str = "The quick brown fox jumps over the";
	int length = strlen(str);
	int charLength [26] = {0};

	for(int i=0;i<length;i++){
		char c = tolower(str[i]);
		if(c>='a' && c<='z'){
			charLength[c-'a']++;
		}
	}

	for(int i=0;i<26;i++){
		if(charLength[i]>0){
			printf("%c = %d\n",97+i,charLength[i]);
		}
	}

}
