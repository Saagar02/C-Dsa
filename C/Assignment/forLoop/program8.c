/*8. WAP take two characters if these characters are equal then print the same but if
they are unequal then print their difference....*/
# include <stdio.h>

void main(){
	char input1;
	char input2;

	printf("Enter the first character : \n");
	scanf("%c",&input1);

	printf("Enter the first character : \n");
	scanf(" %c",&input2);

	int diff = input2-input1;
	if(input1==input2){
		printf("%c",input1);
	}else if(input2>input1) {
		printf("difference between %c and %c is %d\n",input1,input2,diff);
	}else{
		printf("difference between %c and %c is %d \n",input1,input2,diff*-1);
	}

}
