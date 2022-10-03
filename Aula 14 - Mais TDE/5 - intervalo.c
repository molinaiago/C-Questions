#include <stdio.h>
#include "funcaotde.c"

int main() {
	int n1,n2;
	
	printf ("Digite um numero n1: \n");
	scanf("%i",&n1);
	printf ("Digite um numero n2: \n");
	scanf("%i",&n2);
	printf ("---------------------------------\n");
	return intervalos12(n1,n2);
	
	
	return 0;
}
