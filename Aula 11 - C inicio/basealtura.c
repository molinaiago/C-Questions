#include <stdio.h>

int main() {
	
	float base, altura, area, result;
	
	printf("Digite a altura do retangulo: \n");
	scanf ("%f", &altura);
	printf("Digite a base do retangulo: \n");
	scanf("%f", &base);
	
	result = base*altura;
	
	printf("A area do retangulo e: %.2f\n", result);
	
	return 0;
}
