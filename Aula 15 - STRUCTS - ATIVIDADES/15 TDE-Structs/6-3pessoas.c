#include <stdio.h>

struct pessoas_cad{
	char nome[41];
	int idade;		
};		
struct pessoas_cad pessoa[3];	

int main() {	
	int i, j;	
	int idade_pessoa;
	
	for(j=0; j<3; j++){
			printf("Informe o nome da pessoa %d: \n", j);
			fflush(stdin);
			fgets(pessoa[j].nome, 41, stdin);	
		
			denovo:
			printf("Informe a idade...(menor que 45): ");
			fflush(stdin);
			scanf("%d", &idade_pessoa);
			pessoa[j].idade = idade_pessoa;
			
			if (idade_pessoa>=45){
				goto denovo;
			}
	}
			
	printf("\n");	
	
	

	for(j=0; j<3; j++){	
				puts(pessoa[j].nome);
				printf("Idade: %d",pessoa[j].idade);
				printf("\n\n");
			}
		
	printf("\n\n\n");
	return (0);
}
