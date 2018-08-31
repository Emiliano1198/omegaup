#include <stdio.h>
int main(int argc, char *argv[]) {
	int i,j;
	int numero;
	scanf("%d",&numero);
	for( i=1;i<=numero; i++)
	{
		for(j=1; j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
		
	}
	for(i=numero-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}

