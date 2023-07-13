# include<stdio.h>

void main(){
	char carr[4];
	carr[0]='A';
	carr[1]='B';
	carr[2]='C';
	carr[3]='D';

	printf("%c\n",carr[0]);
	printf("%c\n",carr[1]);
	printf("%c\n",carr[2]);
	printf("%c\n",carr[3]);
	printf("%c\n",carr[4]); // array index out of bound
	printf("%c\n",carr[5]);
	/*C does not check boundry condition hence it print array which are out of index */
}
