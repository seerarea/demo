#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,x[100],y[100],i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		while(1)
		{
			if((x[i]-x[i]/10*10)!=0)break;
			y[i]=x[i]-x[i]/10*10;
	    	x[i]=x[i]/10;
		}
	}
	for(i=0;i<n;i++)
	{
		while(1)
		{
		    y[i]=x[i]-x[i]/10*10;
	    	x[i]=x[i]/10;
	    	if(x[i])
	    	{
	    		printf("%d",y[i]);
	    	}
	    	else
		    {
		    	printf("%d\n",y[i]);
		    	break;
	    	}
		}
	}
	return 0;
}
