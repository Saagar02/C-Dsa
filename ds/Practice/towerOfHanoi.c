#include<stdio.h>
int count =1;
int TOH(int no ,char A,char B,char C){

	if(no>0){
		
		TOH(no-1,A,C,B);
		printf("%d)%c->%c\n",count++,A,C);
		TOH(no-1,B,A,C);
	
	}

}
void main(){

	printf("Enter the number of Disk\n");
	int no=0;
	scanf("%d",&no);

	int steps = TOH(no,'A','B','C');

}
