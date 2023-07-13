/*A first-year student, came to your college. Being a good senior, you must tell him if it is possible to go from College Main Gate to Hostel for him.

The college can be visualized on a 2D-plane. Suppose the College Main Gate is situated at origin i.e. at the coordinates (0,0)(0,0) and the Hostel is situated at the coordinates (x,y)(x,y).

As the first-year student wants to explore the college campus further, in one move, he will increase or decrease any coordinate (either the x-coordinate or the y-coordinate) by a value of exactly KK.

Is it possible for the first-year student to reach the Hostel?*/

#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int x,y,k;
		scanf("%d%d%d",&x,&y,&k);

		if(x%k==0 && y%k==0){
			printf("Yesi\n");
		}else{
			printf("No\n");
		}
	
	}

}
