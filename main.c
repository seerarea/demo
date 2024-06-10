#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct student
	{
		char a[10];
	};
	struct student st,ss;
	scanf("%s",ss.a);
	scanf("%s",st.a);
	printf("%p\n%p ",ss.a,st.a);
//	printf("%d",sizeof(st));
	return 0;
}
