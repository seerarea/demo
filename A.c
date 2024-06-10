#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char a[100]={0},b[100]={0},c[100]={0};
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	if(strcmp(a,b)>0)
	{
		if(strcmp(a,c)>0)
		{
			printf("%s\n",a);
		}
		else
		{
			printf("%s\n",c);
		}
	}
	else
	{
		if(strcmp(b,c)>0)
		{
			printf("%s\n",b);
		}
		else
		{
			printf("%s\n",c);
		}
	}
	return 0;
}
