#include <stdio.h>
#include <stdlib.h>

   float main(){
        float val1, metro;
        printf("Escreva um valor em km/h para saber em m/s:\n");
        scanf("%f", &val1);
        metro = val1 / 36;
        printf("metro = %f", metro);
        return 0;
    }
