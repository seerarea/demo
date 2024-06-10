#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n,i=0,j=0,s=0;
	char x;
	scanf("%d",&n);
	char a[100][1001]={0};
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		getchar();
		for(j=0;;j++)
		{
			if(a[i][j]=='\0')
			{
				break;
			}
		}
		j--;
		for(s=0;s<j;s++,j--)
		{
			x=a[i][s];
			a[i][s]=a[i][j];
			a[i][j]=x;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
