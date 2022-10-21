#include <stdio.h>

struct livro{
	int ano_edicao;
	float page_number;
	float price;		
};		
struct livro livros[5];	

int main() {
	int edicao;
	int i,j;
	float pages;
	int preco;
	float mediaall;
	int count = 0;
	
	for (i=0; i<5; i++) {
		printf("Informe o ano de edicao do livro %d..: ",i);
		fflush(stdin);
		scanf("%d", &edicao);
		livros[i].ano_edicao = edicao;	

		printf("Informe o numero de paginas...: ");
		fflush(stdin);
		scanf("%f", &pages);
		livros[i].page_number = pages;
		
		printf("Informe o preco do livro...: ");
		fflush(stdin);
		scanf("%f", &preco);
		livros[i].price = preco;
		printf("\n\n");
		
	}
	
	for (i=0;i<5;i++) {
		printf("%f\n",livros[i].page_number);	
	}
		
	printf("\n");	
	fflush(stdin);
	
	for (i=0;i<5;i++) {
		if (livros[i].page_number != 0) {
			mediaall = mediaall+livros[i].page_number;
			count++;
		}
	}
	mediaall = mediaall/count;

	printf("A media dos 5 livros eh %.3f\n",mediaall);
	
	printf("\n\n\n");
	return (0);
}

