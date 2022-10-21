#include <stdio.h>

struct pessoas_cad{
	char nome[41];
	int idade;
	char sexo[2];	
};		
struct pessoas_cad pessoa[10];	

int main() {	
	int i, j;	
	char sex[2];
	int idade_pessoa;
	int result;
	
	for(j=0; j<10; j++){
			printf("Informe o nome da pessoa %d: \n", j);
			fflush(stdin);
			fgets(pessoa[j].nome, 41, stdin);	
			
			printf("Informe o seu sexo [M/F]: \n");
			fflush(stdin);
			fgets(pessoa[j].sexo, 2, stdin);

			printf("Informe a idade...: ");
			fflush(stdin);
			scanf("%d", &idade_pessoa);
			pessoa[j].idade = idade_pessoa;
	}	
	printf("\n");	
	fflush(stdin);
	printf("Escolha um sexo [M/F]: ");
	fgets(sex, 2, stdin);
	fflush(stdin);

	

	for(j=0; j<10; j++){
		result = strcmp(sex, pessoa[j].sexo);	
			if (result == 0) {
				puts(pessoa[j].nome);
				puts(pessoa[j].sexo);
				printf("\n");
			}
		}
		
	printf("\n\n\n");
	return (0);
}
