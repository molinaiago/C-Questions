#include <stdio.h>

struct pessoas_cad{
	char nome[41];
	int idade;		
};		
struct pessoas_cad pessoa[10];	

int main() {	
	int i, j;	
	int age;
	int idade_pessoa;
	
	for(j=0; j<10; j++){
			printf("Informe o nome da pessoa %d: \n", j);
			fflush(stdin);
			fgets(pessoa[j].nome, 41, stdin);	
		
			printf("Informe a idade...: ");
			fflush(stdin);
			scanf("%d", &idade_pessoa);
			pessoa[j].idade = idade_pessoa;
	}	
	printf("\n");	
	
	printf("Escolha uma idade: ");
	scanf("%d",&age);
	
	

	for(j=0; j<10; j++){	
			if (age == pessoa[j].idade) {
				puts(pessoa[j].nome);
			}
		}
		
	printf("\n\n\n");
	return (0);
}
