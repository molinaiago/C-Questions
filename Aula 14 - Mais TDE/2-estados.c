#include <stdio.h>
#include <string.h>
#include "funcaotde.c"

int main () {
	
char b[2];
	
	printf ("Digite a sigla do seu estado: \n");
	scanf ("%s",&b);
    return estados(b);
	
	return 0;
}
