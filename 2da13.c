#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main (void){
 int vet[SIZE], i;
 int *Endvet;
 Endvet = vet;

 printf("\tDigite %d elementos:\n",SIZE);

 for(i = 0; i < SIZE; i++){
  printf("%d: ",i+1);
    scanf("%d", &vet[i]);
 }

 printf("\n\tELEMENTOS:\n\n");
    for(i = 0; i < SIZE; i++){
        printf("%d  ",vet[i]);
 }

  Endvet++;
 }
