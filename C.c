#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char a[100]={0};
	gets(a);
	int i=0,count=1;
	while(a[i]!=NULL)
	{
		if(a[i]==' ')
		count++;
		i++;
	}
	printf("%d\n",count);
	return 0;
}
