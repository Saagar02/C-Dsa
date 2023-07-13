/*	Program 17 :
 *
 *	Topic : fputc, fgetc
 *	
 *	Fakt 10 character print kar
*/

#include<stdio.h>

void main(){

	FILE *fp1 = fopen("success.txt", "r");

	FILE *fp2 = fopen("property.txt", "w");

	char ch;

	int counter = 10;

	while((ch = fgetc(fp1)) != EOF){
	
		if(ch != counter){
		
			fputc(ch, fp2);
			break;
		}
	}
}
