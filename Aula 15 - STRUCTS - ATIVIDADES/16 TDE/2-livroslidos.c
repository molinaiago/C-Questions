#include <stdio.h>

struct pessoas_cad{
	int idade;
	char sexo[2];
	int livros;
};	
struct pessoas_cad pessoa[50];	

int main() {	
	int i, j;	
	char sex[2];
	int idade_pessoa, livro_lido;
	int cont = 0;
	int result, idade = 0;
	float mediaidade;
	float percent = 0;

	for(j=0; j<50; j++){	
			printf("Informe o seu sexo [M/F]: \n");
			fflush(stdin);
			fgets(pessoa[j].sexo, 2, stdin);

			printf("Informe a idade...: ");
			fflush(stdin);
			scanf("%d", &idade_pessoa);
			pessoa[j].idade = idade_pessoa;
			
			printf("Quantidade de livros lidos: ");
			fflush(stdin);
			scanf("%d", &livro_lido);
			pessoa[j].livros = livro_lido;
			printf("\n\n");
	}
	
	//A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
	printf("Quantidade de livros lidos por pessoas com menos de 10 anos: ");
	for(j=0; j<50; j++){	
		if (pessoa[j].idade < 10) {
			cont = cont + pessoa[j].livros;
		}
	}
	printf("%d\n\n",cont);
	fflush(stdin);
	
	// A quantidade de mulheres que leram 5 livros ou mais.
	cont = 0;
	printf("Quantidade de mulheres que leram mais de 5 livros: ");
	for(j=0; j<50; j++){
	result = strcmp("F", pessoa[j].sexo);	
		if (result == 0) {
			if (pessoa[j].livros >= 5) {
			cont++;
			}
		}
	}
	printf("%d\n\n",cont);
	fflush(stdin);
	
	//A média de idade dos homens que leram menos que 5 livros.
	cont = 0;
	printf("A media de idade dos homens que leram menos que 5 livros: ");
	for(j=0; j<50; j++){
	result = strcmp("M", pessoa[j].sexo);	
		if (result == 0) {
			if (pessoa[j].livros < 5) {
			cont++;
			idade = idade + pessoa[j].idade;
			}
		}
	}
	mediaidade = idade / cont;
	printf("%f\n\n",mediaidade);
	fflush(stdin);
	
	//O percentual de pessoas que não leram livros.
	cont = 0;
	printf("O percentual de pessoas que nao leram livros: ");
	for(j=0; j<50; j++){
		if (pessoa[j].livros == 0) {
			cont++;
		}
	}
	percent = (cont/50)*100;
	printf("%f\n\n",percent);
	fflush(stdin);	


	printf("\n\n\n");
	return (0);
}
