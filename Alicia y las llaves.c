#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int m,n;
	int *tt,*ttt,i,j,a;
	scanf("%d",&m);
	tt = (int*)malloc(m * sizeof(int));
	if (tt==NULL)
	{
		exit (1);
	}
	else
	{
		for(i=0;i<m;i++)
		{
			scanf("%d",&tt[i]);
		}
		scanf("%d",&n);
		ttt = (int*)malloc(n * sizeof(int));
		for(j=0;j<n;j++)
		{
			scanf("%d",&ttt[j]);
		}
		for(a=0;a<m;a++)
		{
			if(tt[a]!=ttt[a])
			{
				printf("0");
			}
			for(int b=0;b<n;b++)
			{
				if(tt[a]==ttt[b])
				{
					printf("%d",a+1);
				}
			}
		}
	}
	free (tt);
	free (ttt);
	return 0;
}
