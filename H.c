#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int m,n;
	scanf("%d %d",&m,&n);
	int x=0,a,b,c,i;
	for(i=m;i<=n;i++)
	{
		c=i%10;
		a=i/100;
		b=i/10%10;
		if (a*a*a+b*b*b+c*c*c==i)
		{
			if (x)
			{
				printf(" ");
			}
			printf("%d",i);
			x++;
		}
	}
	if(!x)printf("no");
	return 0;
}
