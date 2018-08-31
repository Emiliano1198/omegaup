#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int m,n,a,b;
	scanf("%d %d",&m,&n);
	a=m+n;
	b=fabs(a);
	printf("%d",b);
	return 0;
}