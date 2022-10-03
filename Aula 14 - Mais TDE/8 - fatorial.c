#include <stdio.h>
#include "funcaotde.c"

int main () {
	
	int c;
	
	printf("Digite um numero para saber seu fatorial: \n");
	scanf("%i",&c);
	printf("O fatorial desse numero e: %.f\n", fat(c));
	
	return 0;
}
