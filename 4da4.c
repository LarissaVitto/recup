#include <stdio.h>
#include <stdlib.h>

   float main(){
        float real, dolar, val;
        printf("Escreva um valor em real para saber em dolar:\n");
        scanf("%f", &real);
        printf("Escreva a cotacao do dolar:\n");
        scanf("%f", &dolar);
        val = dolar / real;
        printf("val = %f", val);
        return 0;
    }
