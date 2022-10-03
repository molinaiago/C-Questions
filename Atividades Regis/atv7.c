#include <stdio.h>
#include <stdlib.h>

int main() {
	
float vet[12];
int i = 0;
float maior,menor = 1;
 
for (i=0; i<12;i++) {	
	printf("Digite 1 salario: ");
	scanf("%f",&vet[i]);
	
	if (vet[i]>maior) {
		maior = vet[i];
	}
	if (vet[i]<menor) {
		menor = vet[i];
	}
}

for (i=0; i<12;i++) {	
	printf("O salario %d e de %f\n",i,vet[i]);
}
printf("O maior salario e de %f e o menor e de %f",maior,menor);

}


