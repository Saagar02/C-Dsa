/*Bob has an account in the Bobby Bank. His current account balance is WW rupees.

Each month, the office in which Bob works deposits a fixed amount of XX rupees to his account.
YY rupees is deducted from Bob's account each month as bank charges.

Find his final account balance after ZZ months. Note that the account balance can be negative as well.*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int initialA,depositA,deductedA,noofMonths;
		scanf("%d%d%d%d",&initialA,&depositA,&deductedA,&noofMonths);
		printf("%d\n",initialA+depositA*noofMonths-deductedA*noofMonths);

	}



}
