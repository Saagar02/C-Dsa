#include<stdio.h>     
int main(){
    int arr[1000000]={0};
	int a,n;
    scanf("%d",&n);
    while(n--){
	    scanf("%d",&a);
        arr[a]++;
    }
    a=0;
    while(a<1000000){
        while(arr[a]){
            printf("%d\n",a);
            arr[a]--;
        }
        a++;
    }
    return 0;
}