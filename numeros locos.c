#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,i,a,nFor; //declaracion de variables enteras
	int multiplos=0;
	int nomultiplos=0;
	scanf("%d",&n); //solicitamos al usuario el numero loco
	scanf("%d",&i); //aaa
	printf("\n");
	for(nFor=1;nFor<=i;nFor++)
	{
		scanf("%d",&a);
		if ( a % n == 0 )
		{
			nomultiplos++;	
		}
		else
		{
			 
			 multiplos++;
		}
		
	}
	
	printf("%d",multiplos);
	//printf("total de numeros no locos %d",nomultiplos);
	return 0;
	
}

