#include<stdio.h>

int main() {
    int a, b, c, soma;

    printf("Entre 3 valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    soma = a+b+c;

    printf("A soma dos 3 valores e : %d.\n", soma);

    return 0;
}
