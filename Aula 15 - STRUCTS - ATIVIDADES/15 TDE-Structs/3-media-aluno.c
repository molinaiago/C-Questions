#include <stdio.h>

struct dado_aluno{
	int idade;
	float nota1;
	float nota2;		
};		
struct dado_aluno aluno;	

int main() {
	float nota_aluno;	
	float media;
	int idade_pessoa;
	
		printf("Informe a idade do Aluno..: ");
		fflush(stdin);
		scanf("%d", &idade_pessoa);
		aluno.idade = idade_pessoa;	

		printf("Informe a nota 1...: ");
		fflush(stdin);
		scanf("%f", &nota_aluno);
		aluno.nota1 = nota_aluno;
		
		printf("Informe a nota 2...: ");
		fflush(stdin);
		scanf("%f", &nota_aluno);
		aluno.nota2 = nota_aluno;
		
	printf("\n");	

	media = ((aluno.nota1 + aluno.nota2)/2);
	printf("A media eh %.2f",media);
	printf("A idade eh %d",aluno.idade);
	
	
	printf("\n\n\n");
	return (0);
}

