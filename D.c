#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m=0,n=0,i=0,j=0,x=0;
	scanf("%d %d",&m,&n);
	char a[10000]={0};
	for(i=0;i<m;i++)
	{
		a[i]=1;
	}//0_m-1存1表示活人,死人变0 
	for(i=1;i<m;i++)//杀人m-1次 
	{
		for(j=0;j<n;j++)
		{
			if(a[x]==0)
			{
				x++;
				x=x%m;
				j--;
				continue;
			}
			else
			{
				if(j==n-1)
				{
					a[x]=0;
				}
				else
				{
					x++;
				    x=x%m;
				}
			}
		}
	}
	for(i=0;i<m;i++)
	{
		if(a[i])
		{
			printf("%d\n",i+1);
			break;
		}
	}
	return 0;
}
