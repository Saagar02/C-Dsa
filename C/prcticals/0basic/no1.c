#include <stdio.h>
void main(){
    int num;
    printf("Enter the integer value :");
    scanf("%d",& num);

    double rs;
    printf("Enter the double value :");
    scanf("%lf",& rs);

    char chr;
    printf("Enter the char value :");
    scanf(" %c",& chr);

    float crMoney;
    printf("Enter the float value :");
    scanf("%f",& crMoney);

    printf(" num: %d\n",num, sizeof(num));
    printf(" double: %lf\n", rs,sizeof(rs));
    printf(" char: %c\n" ,chr, sizeof(chr));
    printf(" float:%f\n ",crMoney, sizeof(crMoney));
    
 
}
