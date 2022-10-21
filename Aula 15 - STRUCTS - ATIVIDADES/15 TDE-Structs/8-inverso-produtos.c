#include <stdio.h>

struct vendas{
	int qtd_armazenado;
	int qtd_vendida;
	float valor_unitario;		
};		
struct vendas prod[10];	

int main() {
	int i,j;
	int armazenado;
	int vendida;
	float unitario;
	int restante;
	
	for (i=0; i<10; i++) {
		printf("Informe a quantidade armazenada do produto %d..: ",i);
		fflush(stdin);
		scanf("%d", &armazenado);
		prod[i].qtd_armazenado = armazenado;	

		printf("Informe a quantidade vendida...: ");
		fflush(stdin);
		scanf("%d", &vendida);
		prod[i].qtd_vendida = vendida;
		
		printf("Informe o valor unitario do produto...: ");
		fflush(stdin);
		scanf("%f", &unitario);
		prod[i].valor_unitario = unitario;
		printf("\n\n");
		
	}
		
for (i=9; i>-1; i--) {
	if (prod[i].qtd_vendida == 0) {
		printf("Produto: %d\n",i);
		printf("Quantidade armazenada: %d\n",prod[i].qtd_armazenado);
		printf("Produto encalhado!\n\n");
	} else {
		restante = 0;
		restante = prod[i].qtd_armazenado - prod[i].qtd_vendida;
		printf("\n\n");
		printf("Produto: %d\n",i);
		printf("Quantidade armazenada: %d\n",prod[i].qtd_armazenado);
		printf("Quantidade vendida: %d\n",prod[i].qtd_vendida);
		printf("Preco unitario: %f\n",prod[i].valor_unitario);
		printf("Estoque restante: %d\n\n\n",restante);
	}
}

	
	printf("\n\n\n");
	return (0);
}

