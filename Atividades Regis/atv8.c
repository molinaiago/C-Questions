#include <stdio.h>
#include <stdlib.h>

int main() {
	
float vet[10];
int i = 0;
float maior = 1;
 
for (i=0; i<10;i++) {	
	printf("Digite 1 numero: ");
	scanf("%f",&vet[i]);
	
	if (vet[i]>maior) {
		maior = vet[i];
	}
}
printf("O maior numero e de %f",maior);
}

