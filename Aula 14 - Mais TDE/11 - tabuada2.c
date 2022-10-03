#include <stdio.h>
#include "funcaotde.c"

int main () {
	int g;
	
	printf("Digite um numero para saber sua tabuada: \n");
	scanf("%i",&g);
	
	printf (tabuada2(g));
	
	return 0;
}
