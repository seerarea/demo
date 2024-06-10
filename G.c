#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	long long int lib[3001]={0};
	int i=0,j=0; 
	lib[1]=1;
	lib[2]=2;
	lib[3]=4;
	for(i=4;i<=3000;i++)
	{
		lib[i]=lib[i-1]+lib[i-2]+lib[i-3];
	}
	char x;
	int a[100]={0};
	i=0;
	while(1)
	{
		x=getchar();
		if(x==' ')break;
		getchar();
		x=x-'0';
		a[i++]=x;
	}
	printf("%lld",lib[a[j++]]);
	while(a[j])
	{
		printf("\n%lld",lib[a[j++]]);
	}
    return 0;
}
