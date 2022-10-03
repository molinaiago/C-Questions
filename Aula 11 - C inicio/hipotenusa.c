#include <stdio.h>
#include <math.h>

int main () {
	
	float cat1, cat2, hip;
	printf("Digite o cateto 1\n");
	scanf ("%f",&cat1);
	printf ("Digite o cateto 2\n");
	scanf ("%f",&cat2);
	
	hip = sqrt((pow(cat1,2))+(pow(cat2,2)));
	
	printf ("A hipotenusa vale: %.1f\n", hip);
	
	return 0;
}
