#include<stdio.h>

void userVal(int x ,int y){
	printf("x = %d\ny = %d ",x,y);

}
int main(){
	int x , y;
	printf("Enter value of x and y :\n");
	scanf("%d %d",&x,&y);
	userVal(x,y);
}
