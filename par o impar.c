#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero;
	scanf( "%d", &numero );
	
	if ( numero % 2 == 0 )
		printf( "PAR");
	else
		printf( "IMPAR" );
	return 0;
}