#include <stdio.h>
#include <stdlib.h>

int main() {
	
float vet[5];
int i = 0;

for (i=0; i<5;i++) {
	printf("Digite a altura do atleta %d\n",i);
	scanf("%f",&vet[i]);
}

for (i=0; i<5;i++) {
	printf("A altura do atleta %d e de %f\n",i,vet[i]);
}

	
return 0;	
}
