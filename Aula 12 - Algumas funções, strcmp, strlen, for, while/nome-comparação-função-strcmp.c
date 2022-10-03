#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

char prof[3];
float sal;

printf ("Digite sua profissao: tec, est ou outro \n");
scanf ("%s",&prof);

printf ("Digite seu salario: \n");
scanf ("%f",&sal);

if (strcmp(prof, "tec")==0) {
	printf ("Sua profissao e TECNICO e seu salario sofre um reajuste de 50 porcento ficando: %.f reais \n", (sal+(sal/2)));
}

if (strcmp(prof, "est")==0) {
	printf ("Sua profissao e ESTAGIARIO e seu salario sofre um reajuste de 30 porcento ficando: %.f reais \n", (sal+(sal*0.3)));
}
else {
	printf ("Voce digitou OUTRO, seu salario sofre um reajuste de 10 porcento ficando: %.f reais \n", (sal+(sal*0.1)));
}
	return 0;
}
