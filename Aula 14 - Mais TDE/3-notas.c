#include <stdio.h>
#include "funcaotde.c"

int main () {
	
	float p1,p2,p3,p4,t1,t2,t3,t4;
	
	printf ("Digite a nota da prova 1: \n");
	scanf ("%f",&p1);
	
		printf ("Digite a nota da prova 2: \n");
	scanf ("%f",&p2);
	
		printf ("Digite a nota da prova 3: \n");
	scanf ("%f",&p3);
	
		printf ("Digite a nota da prova 4: \n");
	scanf ("%f",&p4);
	
		printf ("Digite a nota da trabalho 1: \n");
	scanf ("%f",&t1);
	
		printf ("Digite a nota da trabalho 2: \n");
	scanf ("%f",&t2);
	
	printf ("Digite a nota da trabalho 3: \n");
	scanf ("%f",&t3);
	
	printf ("Digite a nota da trabalho 4: \n");
	scanf ("%f",&t4);
	
	return notas(p1,p2,p3,p4,t1,t2,t3,t4);
	
	
	
	return 0;
}
