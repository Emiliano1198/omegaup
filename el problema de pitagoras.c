#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int i,j,k;
	int numero1,numero2,c=0,a;
	scanf("%d" "%d",&numero1,&numero2);
	for(i=numero1; i <= numero2; i++)
	{
	for(j=numero1; j <= numero2; j++)
	{
		for(k=numero1; k <= numero2; k++)
		{
		if(pow(i,2) + pow(j,2) == pow(k,2))
		{
			c++;
		}
		}
	}
	}
	a=c/2;
	printf("%d",a);
	return 0;
}

