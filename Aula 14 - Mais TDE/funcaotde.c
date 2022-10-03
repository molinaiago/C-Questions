#include <string.h>
#include <math.h>
#include <stdio.h>

//1 - positivo, negativo ou zero

int pos(a) {
	
		if (a == 0) {
		printf ("ZERO");
	}
	if (a>0) {
		printf ("POSITIVO");
	}
	if (a<0) {
		printf ("NEGATIVO");
	}
}
//----------------------------------------------------------------------------
//2 - estados a. Carioca --- b. Paulista --- c. Mineiro --- d. Outros estados.

char estados(b) {

	if (! stricmp(b,"ac")) {
		printf ("Voce e acriano!");
	}
	if (! stricmp(b,"al")) {
		printf ("Voce e alagoano!");
	}	
	 if (! stricmp(b,"ap")) {
		printf ("Voce e amapaense!");
	}	
	if (! stricmp(b,"am")) {
		printf ("Voce e amazanonense!");
	}	
	if (! stricmp(b,"ba")) {
		printf ("Voce e baiano!");
	}	
	if (! stricmp(b,"ce")) {
		printf ("Voce e cearense!");
	}	
	if (! stricmp(b,"df")) {
		printf ("Voce e brasiliense!");
	}	
	if (! stricmp(b,"es")) {
		printf ("Voce e capixaba!");
	}	
	if (! stricmp(b,"go")) {
		printf ("Voce e goiano!");
	}	
	if (! stricmp(b,"ma")) {
		printf ("Voce e maranhense!");
	}	
	if (! stricmp(b,"mt")) {
		printf ("Voce e matogrossense!");
	}
	if (! stricmp(b,"ms")) {
		printf ("Voce e matogrossense do sul!");
	}
	if (! stricmp(b,"mg")) {
		printf ("Voce e mineiro!");
	}
		if (! stricmp(b,"pr")) {
		printf ("Voce e parananese!");
	}
		if (! stricmp(b,"pb")) {
		printf ("Voce e paraibano!");
	}
		if (! stricmp(b,"pa")) {
		printf ("Voce e paraense!");
	}
	if (! stricmp(b,"pe")) {
		printf ("Voce e pernambucano!");
	}
		if (! stricmp(b,"pi")) {
		printf ("Voce e piauiense!");
	}
	if (! stricmp(b,"rn")) {
		printf ("Voce e potiguar!");
	}
		if (! stricmp(b,"rs")) {
		printf ("Voce e gaucho!");
	}
		if (! stricmp(b,"rj")) {
		printf ("Voce e carioca!");
	}
		if (! stricmp(b,"ro")) {
		printf ("Voce e rondoniense!");
	}
		if (! stricmp(b,"rr")) {
		printf ("Voce e roraimense!");
	}
	if (! stricmp(b,"sc")) {
		printf ("Voce e catarinense!");
	}
		if (! stricmp(b,"se")) {
		printf ("Voce e serjipano!");
	}
		if (! stricmp(b,"sp")) {
		printf ("Voce e paulista!");
	}
	if (! stricmp(b,"to")) {
		printf ("Voce e tocantinense!");
	}
	
}

// ------------------------------------------------------------
//3 - Leia quatro notas de prova (P1, P2, P3 e P4) e quatro notas de trabalho (T1, T2, T3 e T4) e posteriormente exiba a mensagem “Aprovado” ou “Não Aprovado” dependo dos valores obtidos

float notas(float p1, float p2, float p3, float p4, float t1, float t2, float t3, float t4) {
float mediaprova, mediatrabalho, final;

mediaprova = (p1+p2+p3+p4)/4;
mediatrabalho = (t1+t2+t3+t4)/4;

final = (0.8 * mediaprova) + (0.2 * mediatrabalho);

if (final >= 6) {
	printf ("APROVADO, com a media da prova: %.2f e a media do trabalho: %.2f", mediaprova, mediatrabalho);
}
else {
	printf ("REPROVADO, com a media da prova: %.2f e a media do trabalho: %.2f", mediaprova, mediatrabalho);
}
}
//-----------------------------------------------------------------
// 4 - Inteiro N laço while - 0 e 100 multiplos de N

int multiplos(n) {
	int i;
	
while (i <= 100) {
	if ( i % n == 0) {
		printf ("%i\n",i);
	}
i++;
}
}
//-----------------------------------------------------------------
// 5 - Leia dois números inteiros do usuário n1 e n2 e mostre todos os números que estão entre n1 e n2. Deve funcionar para n1>n2 e n2>n1. Use o laço while.
int intervalos12(int n1, int n2) {
	int cont;
	
	if (n1<n2) {
		n1+1;
	do {
		printf ("%i\n",n1);
		n1++;
	}
	while (n1 < n2);
	}
	
	if (n1>n2) {
		n2+1;
	do {
		printf ("%i\n",n2);
		n2++;
	}
	while (n2 < n1);
	}
}
//-----------------------------------------------------------------
// 6 - Usando o comando do while, solicite um número até o usuário digitar um número POSITIVO. Após isso, diga a raiz desse número (Usar a função sqrt da biblioteca math.)

float raiz(n) {
	float raizq, cont;
	
	if (n<0) {
		cont = n;
	}
	
	do {
		if (n<0) {
				printf("Digite um numero positivo!");
				break;
			}

			raizq = sqrt(n);
			printf ("A raiz do numero %i e: %.2f\n", n, raizq);
				
		} while (n == cont);
	} 

//-----------------------------------------------------------------
// 7 - Usando o FOR faça o programa dizer os 100 digitos do 100 ao 0

int cemaozero(m) {	
int contador;

	for(contador = m ; contador >= 0; contador--) 
	{
	printf ("%i\n",contador);
	}
}

//-----------------------------------------------------------------
// 8 -Fatorial
float fat(c) {
	float f;
	
	for (f = 1; c >= 1; c--) {
		f = c * f;
	}
	return f;
}
//-----------------------------------------------------------------
//9 Tabuada
int tabuada(f) {
	int cont,i;
	
	 for (cont=0; cont<=10 ; cont++){
        printf("%i x %i = %i \n",f,cont,f*cont);
    }

}
//-----------------------------------------------------------------
// 10 - Soma de 10 numeros

int soma10(a) {
int	b, cont, soma;
soma = 0;

for (cont = 1;cont <= 9;cont++) {
	printf ("Digite um numero: \n");
	scanf("%i",&b);
	soma = b + soma;
}
soma = soma + a;
printf ("Sua soma e: %i\n", soma);
}

//-----------------------------------------------------------------
// 11 - tabuada
int tabuada2(g) {
	int cont,i;
	
	 for (cont=0; cont<=10 ; cont++){
        printf("%i x %i = %i \n",g,cont,g*cont);
    }

}
//-----------------------------------------------------------------
// 12 - n2 é multiplo de n1?

int ehmultiplo(int a, int b) {

	
	if (b % a == 0) {
	printf("1");
	}
	else {
	printf("0");
	}
}
//-----------------------------------------------------------------
// 13 -- pedir altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 * alt - 58 e ,para mulheres, peso ideal = 62.1 * alt – 44.7.
float pesoideal(char sex, float a) {
	float peso;
	
	if (sex == 'm') {
	peso = (62.1 * a) - 44.7;
	return peso;
}
if (sex == 'h') {
	peso = (72.7 * a) - 58;
	return peso;
}
}
//-----------------------------------------------------------------
// 14 - Fatorial
float fat1(fatorial) {
	float f;
	
	for (f = 1; fatorial >= 1; fatorial--) {
		f = fatorial * f;
	}
	return f;
}
//-----------------------------------------------------------------
// 15 - Números primos

int ehprimo(int n1) {
	int cont, div;
	
	div = 0;
	for (cont=1; cont <= n1; cont++) {
		if (n1 % cont == 0) {
			div++;
		}
	}
	
	if (div == 2) {
		printf ("Seu numero %i possui %i divisores, ele eh primo!", n1, div);
	}
	else {
		printf ("Seu numero %i possui %i divisores, ele nao eh primo!", n1, div);
	}
}
//-----------------------------------------------------------------
// 16 - Dizer se  é primo até digitar 0
int ehprimo2(int n2) {
	int cont,div,resp;
	
	ponto:	
	cont = 0;
	div = 0;	
	for (cont=1; cont <= n2; cont++) {
		if (n2 % cont == 0) {
			div++;
		}
	}
	if (div == 2) {
		printf ("Seu numero %i possui %i divisores, ele eh primo!\n", n2, div);
	}
	else {
		printf ("Seu numero %i possui %i divisores, ele nao eh primo!\n", n2, div);
	}
	printf ("-------------------------------\n");
	printf ("Voce quer continuar?\n");
	scanf("%i",&resp);
	
	if (resp == 1) {
		printf ("Qual seu novo valor para saber se eh primo?\n");
		scanf ("%i",&n2);
		goto ponto;
	}
	}


