#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,i,flag=0;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<=1)printf("no\n");
		else
		{
			for(i=2;i<n;i++)
			{
				if(n%i==0)
				{
					flag++;
					break;
				}
			}
			if(flag)printf("no\n");
			else printf("yes\n");
			flag=0;
		}
	}
	return 0;
}
