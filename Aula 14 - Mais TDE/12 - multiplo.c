#include <stdio.h>
#include "funcaotde.c"

int main () {
	int a,b;
	
	printf("Digite um numero: \n");
	scanf("%i",&a);
	printf("Digite um numero: \n");
	scanf("%i",&b);
	printf ("-----------------------------\n");
	return ehmultiplo(a,b);
	
	return 0;
}
