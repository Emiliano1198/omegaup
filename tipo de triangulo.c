#include <stdio.h>
int main(void) {
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=a+b+c;
	if(d==180){
		if(a == b && b == c){
			printf("EQUILATERO");
		}
		if(a>b && a>c){
			printf("ISOSCELES");
		}
		if(a!=b && a!=c && b!=c ){
			printf("ESCALENO");
		}
	}else{
		printf("ERROR");
	}
	return 0;
}

