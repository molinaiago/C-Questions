#include <stdio.h>
#include "funcaotde.c"

int main () {
	int n2;
	
	printf ("Digite um numero para saber se e primo: \n");
	scanf("%i",&n2);
	
	return ehprimo2(n2);
	
	return 0;
}
