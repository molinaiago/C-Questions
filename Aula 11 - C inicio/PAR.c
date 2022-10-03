#include <stdio.h>

int main () {
	
	int num;
	
	printf("Digite um numero: \n");
	scanf("%i",&num);
	
	if(num % 2 == 0) {
	printf("PAR");
}
else {
	printf ("IMPAR");
}
}
