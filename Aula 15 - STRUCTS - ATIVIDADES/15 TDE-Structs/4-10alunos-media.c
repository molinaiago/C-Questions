#include <stdio.h>

struct dado_aluno{
	int idade;
	float nota1;
	float nota2;		
};		
struct dado_aluno aluno[10];	

int main() {
	float nota_aluno;	
	float media;
	int idade_pessoa;
	int i,j;
	
	for (i=0; i<10; i++) {
	
		printf("Informe a idade do Aluno %d..: ",i);
		fflush(stdin);
		scanf("%d", &idade_pessoa);
		aluno[i].idade = idade_pessoa;	

		printf("Informe a nota 1...: ");
		fflush(stdin);
		scanf("%f", &nota_aluno);
		aluno[i].nota1 = nota_aluno;
		
		printf("Informe a nota 2...: ");
		fflush(stdin);
		scanf("%f", &nota_aluno);
		aluno[i].nota2 = nota_aluno;
		printf("\n\n");
		
	}
		
	printf("\n");	
fflush(stdin);
	for (i=0; i<10; i++) {
	media = ((aluno[i].nota1 + aluno[i].nota2)/2);
	printf("A media eh %.3f\n",media);
	printf("A idade eh %d",aluno[i].idade);
	printf("\n\n");
	}
	
	printf("\n\n\n");
	return (0);
}

