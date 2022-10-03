#include <stdio.h>

int main() {
	int a, vivido;
	
	printf("Quantos anos voce tem?\n");
	scanf("%i",&a);
	
	vivido = a *365;
	
	printf("Voce viveu um total de %i dias\n", vivido);
	
	return 0;
}

