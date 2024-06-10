#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,i,j,length=0,s;
	char a[1003];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(a);
		j=0;
		while(a[j])
		{
			if(a[j]==' ')
			{
				for(s=j-1;length>0;length--,s--)
				{
					printf("%c",a[s]);
				}
				printf(" ");
				j++;
			}
			else
			{
				length++;
				j++;
			}
		}
		for(s=j-1;length>0;length--,s--)
		{
			printf("%c",a[s]);
		}
		printf("\n");
	}
	return 0;
}
