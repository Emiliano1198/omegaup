#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if(a>b && a>c){
		printf("el numero mayor es %d",a);
		}
	if (b>a && b>c){
		printf("el numero mayor es %d",b);
	}
	if (c>a && c>b){
		printf("el numero mayor es %d",c);
	}
	return 0;
}

