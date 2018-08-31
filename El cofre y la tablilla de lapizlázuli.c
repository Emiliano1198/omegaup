#include <stdio.h>

int main(int argc, char *argv[]) {
	int A,B,C,X,Y,Z,n,m;
	if ((A,B,C,X,Y,Z>=1) || (A,B,C,X,Y,Z<=1000)){
	scanf ("%d %d %d %d %d %d",&A,&B,&C,&X,&Y,&Z);
	m=A*B*C;
	n=X*Y*Z;
	if(m<=n){
		printf("1");
	}else{
		printf("0");
	}
	}
	return 0;
}