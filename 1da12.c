#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int num1, num2;

    printf("Digite um numero: ");
        scanf("%i", &num1);
    printf("Digite mais um numero: ");
        scanf("%i", &num2);

    if(&num1 > &num2){
        printf("Numero um tem o maior endereco de memoria\n");
        return;
    }
    printf("Numero 2 tem o maior endereco de memoria\n");

}
