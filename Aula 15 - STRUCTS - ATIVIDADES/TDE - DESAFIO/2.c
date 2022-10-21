#include <stdio.h>

struct cad_pessoas{
	char nome[41];
	int idade;
	char sexo[2];
	float renda;		
};		
struct cad_pessoas pessoas[10];	

int main() {
	float renda_out;
	int idade_pessoa;
	int i;
	int c;
	char sex[2];
	char choicesex[2];
	int choiceage, result, menuchoice;
	
	menu:
	printf(" Escolha uma opcao: \n[1]CADASTRO\n[2]Consultar todas pessoas\n[3]Consultar por sexo\n[4]Consultar por faixa de idade e sexo\n[5]PARAR\n");
	scanf("%d",&menuchoice);
	fflush(stdin);
			
	switch (menuchoice) {
	case 1:	
		printf("Informe o nome da pessoa %d: ", i);
		fflush(stdin);
		fgets(pessoas[i].nome, 41, stdin);	
				
		printf("Informe a sua idade...: ");
		fflush(stdin);
		scanf("%d", &idade_pessoa);
		pessoas[i].idade = idade_pessoa;
						
		printf("Informe o sexo da pessoa: ");
		fflush(stdin);
		fgets(pessoas[i].sexo,2, stdin);	
						
		printf("Informe a renda...: ");
		fflush(stdin);
		scanf("%f", &renda_out);
		pessoas[i].renda = renda_out;
		printf("\n\n");
		i++;
		goto menu;
		
	case 2:
		for (i=0; i<10; i++) {
			if(pessoas[i].renda!=0) {
			printf("\nPessoa %d\n",i);
			printf("Nome: ");
			puts(pessoas[i].nome);
			printf("Sexo: ");
			puts(pessoas[i].sexo);
			printf("Idade: %d\n",pessoas[i].idade);
			printf("Renda: %f\n\n\n",pessoas[i].renda);
			}
		}
		goto menu;
		
	case 3:
		fflush(stdin);
		printf("Escolha um sexo [M/F]: ");
		fgets(choicesex, 2, stdin);
		fflush(stdin);
		
		for(i=0; i<10; i++){
			result = strcmp(choicesex, pessoas[i].sexo);
			if (result == 0) {
				printf("\nPessoa %d\n",i);
				printf("Nome: ");
				puts(pessoas[i].nome);
				printf("Sexo: ");
				puts(pessoas[i].sexo);
				printf("Idade: %d\n",pessoas[i].idade);
				printf("Renda: %f\n\n\n",pessoas[i].renda);	
				}
		}
		goto menu;
		
	case 4:
		fflush(stdin);
		printf("Escolha um sexo [M/F]: ");
		fgets(choicesex, 2, stdin);
		fflush(stdin);
				
		printf("Diga a idade que voce quer: ");
		scanf("%d",&choiceage);
				
		for(i=0; i<10; i++){
		result = strcmp(choicesex, pessoas[i].sexo);	
		
		if (result == 0 && choiceage==pessoas[i].idade) {
			printf("\nPessoa %d\n",i);
			printf("Nome: ");
			puts(pessoas[i].nome);
			printf("Sexo: ");
			puts(pessoas[i].sexo);
			printf("Idade: %d\n",pessoas[i].idade);
			printf("Renda: %f\n\n\n",pessoas[i].renda);	
			}
		}
		goto menu;
		
	case 5:
		break;
	default:
		printf("\nOpcao invalida!");
		goto menu;
	}

	printf("\n\n\n");
	return (0);
}

