#include<stdio.h>

void TOH(int n , char source,char dest,char auxiliary){
	
	static int step = 0;
	printf("Towers (%d ,%c ,%c , %c)\n",n,source,dest,auxiliary);
	if(n == 1){
		printf("\t\t\tstep  %3d: Move %c to %c \n",++step,source,dest);
	}else{
		TOH(n-1,source,auxiliary,dest);
		printf("\t\t\tstep  %3d: Move %c to %c \n",++step,source,dest);
		TOH(n-1,auxiliary,dest,source);
	}
	return;
}
void main(){
	int no;
	printf("enter no of disk\n");
	scanf("%d",&no);
	printf("Start of Tower Of Henoi :\n");
	TOH(no,'A','C','B');

}
