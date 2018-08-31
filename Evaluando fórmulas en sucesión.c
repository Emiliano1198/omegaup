#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	float x,potencia,a,b;
	float y,z;
	scanf("%f",&x);
	y=(x+5)/(2*(x+1));
	potencia = pow(y, 2);
	a=x*(x-(2*y));
	z=((potencia)+a)/(x*y);
	printf("%f",z);
	return 0;
}