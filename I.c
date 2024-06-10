#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char a[201]={0};
	int i,count=0;
	while(gets(a)!=NULL)
	{
		if(count)printf("\n");
		count++;
	    for(i=strlen(a)-1;i>=0;i--)
	    {
	    	printf("%c",a[i]);
    		a[i]=0;
	    }
    }
	return 0;
}
