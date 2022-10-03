#include <stdio.h>
#include "funcaotde.c"

int main () {
	int f;
	
	printf("Digite um numero para saber sua tabuada: \n");
	scanf("%i",&f);
	
	printf (tabuada(f));
	
	return 0;
}
