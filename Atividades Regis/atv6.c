#include <stdio.h>
#include <stdlib.h>

int main() {
	
int vet[5];
int i = 0;


for (i=0; i<5;i++) {
	printf("Digite 1 numero inteiro: ");
	scanf("%d",&vet[i]);
}

for (i=4;i>=0;i--) {
	printf("%d\n",vet[i]);
}




}


