#include <stdio.h>
#include <stdlib.h>
int input(int *x)
{
	int i;
	for(i=0;i<=9;i++)
	{
		scanf("%d",x);
		x++;
	}
}
int sort(int *x)
{
	int i,j;
	for(i=0;i<=8;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(*(x+i)>*(x+j))
			{
				*(x+i)=*(x+i)+*(x+j);
				*(x+j)=*(x+i)-*(x+j); 
				*(x+i)=*(x+i)-*(x+j);
			}
		}
	}
}
int output(int *x)
{
	int i;
	for(i=0;i<=9;i++)
	{
		printf("%d ",*x);
		x++;
	}
}
int main(){
   int a[10];
   input(a);
   sort(a);
   output(a);
}
