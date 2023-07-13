#include<stdio.h>

void main(){
	int x = 10;
	int y = printf("all %d\n",x);
	printf("%d\n",y);

	nt delLast(){
        if(head == NULL){
                printf("Empty LinkList\n");
                return -1;
        }else{
                node *temp = head;
                while(temp ->next->next!= head){
                        temp = temp ->next;
                }
                free(temp->next);
                temp ->next=head;
        }
}


}
