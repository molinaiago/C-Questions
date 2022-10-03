#include <stdio.h>
#include "funcaotde.c"

int main () {
	
	int fatorial;
	
	printf("Digite um numero para saber seu fatorial: \n");
	scanf("%i",&fatorial);
	printf("O fatorial desse numero e: %.f\n", fat1(fatorial));
	
	return 0;
}
