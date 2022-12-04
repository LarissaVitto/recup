#include <stdio.h>
#include <stdlib.h>

int main() {
	char string[30];
	int i;

	printf("Digite uma palava qualquer: ");
	gets(string);

	printf("\nQuatro primeiras letras: ");

	for (i=0; i<4; i++) printf("%c ", string[i]);

	printf("\n\n");

	return 0;
}
