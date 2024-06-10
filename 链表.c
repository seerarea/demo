#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	typedef struct student{
		int score;
		struct student *next;
	}linklist;
	linklist *creat(int n){
		linklist *head,*end,*now;
		head=(linklist*)malloc(sizeof(linklist));
		head->score=8;
		end=head;
		int i;
		for(i=0;i<n;i++)
		{
			now=(linklist*)malloc(sizeof(linklist)); 
			scanf("%d",&now->score);
			end->next=now;
			end=now;
		}
		end->next=head;
		return head; 
	}
	int i=0;
	linklist *a;
	a=creat(3);
	while(i<=10)
	{
		i++;
		a=a->next;
		printf("%d\n",a->score);
	}
	return 0;
}
