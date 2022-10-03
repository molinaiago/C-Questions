#include <stdio.h>
#include <stdlib.h>

int main() {
	
int a[] = {10,11,12,13,14,15,16,17};
int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
int c[9];
int i,j = 0;


for (i=0; i<10;i++) {
	c[i] = a[i] + b[i];
}

for (i=0; i<10;i++) {
	printf("%d\n",c[i]);
}



return 0;
}
