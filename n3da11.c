#include <stdio.h>
#include <assert.h>

int main() {
    char str [99];
    printf("Digite uma frase qualquer: ");
	gets(str);
    int contaChar(char str[]) {
    int i = 0;

    do {
        ++i;
    } while (str[i] != 0);

    return i;
}

    char ola[] = "palavra";
    assert(7 == contaChar(ola));
    return 0;
}
