#include <stdio.h>

int main() {
	float a,b, result;
	
	printf("Digite um valor a\n");
	scanf("%f",&a);
	printf("Digite um valor b\n");
	scanf("%f",&b);
	
	result = (a+b)/2;
	
	printf("O resultado e %.2f\n", result);
	
	if (result>=7) {
		printf("Voce esta aprovado!");
	}
	else {
		printf("Voce esta reprovado");
	}
	
	return 0;	
}
