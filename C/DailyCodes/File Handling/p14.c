/*	Program 13 : 
 *
 *	4] ftell
 *
 *		offset - character kitva ahe file madla		
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("info.txt", "w");

	printf("%ld\n", ftell(fp));	//0
	
	rewind(fp);			//pointer resets to 0

	fprintf(fp, "Biencaps");

	printf("%ld\n", ftell(fp));	//8
}
