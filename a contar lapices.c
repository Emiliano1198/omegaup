#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,k,s;
	int a;
	int	b=0;
	scanf("%d %d",&n,&k);
	
	for(a=1;a<=n;a++)
	{
		scanf("%d",&s);
		if(s==k)
		{
			b++;
		}
	}
	printf("\n");
	printf("%d",b);
	return 0;
}

