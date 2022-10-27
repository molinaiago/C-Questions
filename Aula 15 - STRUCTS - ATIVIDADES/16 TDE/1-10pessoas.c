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
	int result, choice, aux;
	int c[10];
	
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
	
	menu:
	printf("[1]Consultar por ordem inversa do registro\n ");
	printf("[2]Consultar por idade em ordem crescente\n ");
	printf("[3]Consultar por idade em ordem decrescente\n ");
	printf("[4]Consultar por sexo\n ");
	printf("[5]Apresentar os dados na ordem original\n ");
	printf("[6]Sair\n");
	scanf("%d",&choice);
	
	switch(choice) {
	
	case 1:
		
	for (i=9; i>-1; i--) {
		printf("Pessoa %d\n",i);
		printf("Nome: ");
		puts(pessoa[i].nome);
		printf("Sexo: ");
		puts(pessoa[i].sexo);
		printf("Idade: %d\n\n",pessoa[i].idade);
	
	}
	goto menu;
		
	case 2:
		for (i=0; i<10; i++) {
				c[i] = 0;
			}
		aux = 0;
				
		for (i=0; i<10; i++) {
				c[i] = pessoa[i].idade;
			}

		for(i=1; i<10; i++){
        for(j=1; j<10; j++){
        if(c[i] < c[j]){
           aux = c[i]; 
           c[i] = c[j];
           c[j] = aux; 
        }
      }
    }

    for(i=0;i<10;i++){
    	printf("Pessoa %d\n",i);
		printf("Nome: ");
		puts(pessoa[i].nome);
		printf("Sexo: ");
		puts(pessoa[i].sexo);
        printf("Idade: %d\n\n",c[i]);
	}
	goto menu;
	
	case 3:
		for (i=0; i<10; i++) {
				c[i] = 0;
			}
		aux = 0;
				
		for (i=0; i<10; i++) {
				c[i] = pessoa[i].idade;
			}

		for(i=1; i<10; i++){
        for(j=1; j<10; j++){
        if(c[i] > c[j]){
           aux = c[i]; 
           c[i] = c[j];
           c[j] = aux; 
        }
      }
    }

    for(i=0;i<10;i++){
    	printf("Pessoa %d\n",i);
		printf("Nome: ");
		puts(pessoa[i].nome);
		printf("Sexo: ");
		puts(pessoa[i].sexo);
        printf("Idade: %d\n\n",c[i]);
	}
	goto menu;
		
	case 4:
		
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
	goto menu;
			
	case 5:
		for (i=0; i<10; i++) {
		printf("Pessoa %d\n",i);
		printf("Nome: ");
		puts(pessoa[i].nome);
		printf("Sexo: ");
		puts(pessoa[i].sexo);
		printf("Idade: %d\n\n",pessoa[i].idade);
	
	}
	goto menu;
	
	case 6:
	break;
	
	default:
		goto menu;
	
	}
	
	printf("\n\n\n");
	return (0);
}
