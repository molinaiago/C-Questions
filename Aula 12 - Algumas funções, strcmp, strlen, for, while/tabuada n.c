#include <stdio.h>

int main() {
	int i, num;
	
	printf ("Digite um numero: \n");
	scanf ("%i",&num);

//enquanto

i = 0;

while (i <= 100) {
	
	if (i % num == 0) {
	
	printf ("%i\n", i);
	
	}
i = i+1; //i++
}
	
return 0;
}
