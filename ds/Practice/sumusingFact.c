#include<stdio.h>
int sum(int no){
	if(no>=1){
		return no + sum(no-1);
	}else{
		return 1;
	}
}
void main(){
	int no;
	printf("Enterr the number till you want sum :");
	scanf("%d",&no);

	printf("%d",sum(no));

}
