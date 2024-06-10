#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int solve(int n,int *x);
int main(int argc, char *argv[]) 
{
	int n,i,a[101]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	solve(n,a);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
int solve(int n,int *x)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(x+i)>*(x+j))
			{
				*(x+i)=*(x+i)+*(x+j);
				*(x+j)=*(x+i)-*(x+j); 
				*(x+i)=*(x+i)-*(x+j);
			}
		}
	}
	return 0;
}
