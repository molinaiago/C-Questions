#include <stdio.h>
#include "funcao.c"

int main() {
	
	int a,b ;
	
	printf ("Digite o valor do cateto 1: \n");
	scanf ("%i",&a);
	
	printf ("Digite o valor do cateto 2: \n");
	scanf ("%i",&b);
	
	printf ("O valor da hipotenusa e: %.2f\n", hip(a,b));
	
	return 0;
}
