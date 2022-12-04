#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;
}
int main(){
    float num1, num2;
    printf("Escreva um numero: ")
    scanf("%f", &num1)
     printf("Escreva um numero: ")
    scanf("%f", &num2)

    if(num1 < num2){
    troca(&num1, &num2)
    }
    if(num1 > num2){
    troca(&num2, &num1)
    }
}
