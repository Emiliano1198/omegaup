#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int *tt;
	int i,aux,j,n;
	scanf("%d",&n);
	tt = (int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&tt[i]);
	}
	int num;
	num=tt[0];
	for(i=1; i<n; i++) 
	{
		for(j=0;j<n;j++)
		{
			if(tt[j]>tt[j+1])
			{
				aux=tt[j];
				tt[j]=tt[j+1];
				tt[j+1]=aux;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(tt[i]==num)
		{
			printf("%d",i);
		}
	}
	free (tt);
	return 0;
}

