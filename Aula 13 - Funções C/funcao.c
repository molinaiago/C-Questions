#include <stdio.h>
#include <math.h>

// Funcao 1
	int maior(int n1, int n2) {
		
	if (n1>n2) {
		return n1;
	}		
	else {
		return n2;
	}
}

// --------------------------------------

// Funcao 2

int hip(int n1, int n2) {
float h;

	h = sqrt((n1*n1)+(n2*n2));
	return h;
}
