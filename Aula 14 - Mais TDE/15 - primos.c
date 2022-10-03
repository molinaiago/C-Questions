#include <stdio.h>
#include "funcaotde.c"

int main () {
	int n1;
	
	printf ("Digite um numero para saber se e primo: \n");
	scanf("%i",&n1);
	
	return ehprimo(n1);
	
	
	
	return 0;
}
