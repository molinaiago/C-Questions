#include <stdio.h>
#include "funcao.c"

int main() {
	int a, b;
	
	printf ("Digite um numero: \n");
	scanf ("%i",&a);
	
	printf ("Digite outro número: \n");
	scanf ("%i",&b);
	
	printf ("O maior e: %i\n", maior(a,b));
	
	return 0;
}
