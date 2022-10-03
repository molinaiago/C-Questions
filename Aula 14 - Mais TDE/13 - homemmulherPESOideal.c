#include <stdio.h>
#include <string.h>
#include "funcaotde.c"
int main() {
	float a;
	char sex;
	
	printf ("Qual o seu sexo? m ou h\n");
	scanf  ("%s",&sex);
	
	printf("Qual sua altura?\n");
	scanf ("%f",&a);

	printf ("%.2f",pesoideal(sex,a));
	
	return 0;
}
