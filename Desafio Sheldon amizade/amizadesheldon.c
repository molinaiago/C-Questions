#include <stdio.h>
#include <stdlib.h>

int main() {

char call = "N";
char food;
char drink;
int type;
char vet[30];
char res;

while (call!='S') {
	printf("Ligando...");
	printf("Atendeu? [S/N]\n");
	scanf("%c",&call);
	
	fflush(stdin);
	
	if (call=='S') {
		break;
	}
	
}

printf("Deseja comer? [S/N]\n");
scanf("%c",&food);
fflush(stdin);

if (food=='S') {
	printf("Parabéns, voce e meu amigo.");
}	
else {
	
	printf("Voce quer beber? [S/N]\n");
	scanf("%c",&drink);
		
		if (drink=='S') {
			printf("Cafe, Cha ou Chocolate? [1],[2],[3]\n");
			scanf("%d",&type);
			printf("Parabens, voce e meu amigo!");
		}
		else {
			
			do {
				printf("Qual o seu interesse?\n");
				scanf("%s",&vet);
				
				fflush(stdin);
				
				printf("Você gostou? [S/N]\n");
				scanf("%c",&res);
					
				} while (res!='S');
				
				printf("Estamos fazendo %s\n",vet);
				printf("Parabens, somos amigos!");
		}
}

}
