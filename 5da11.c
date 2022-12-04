#include <stdio.h>
#include <string.h>


int main(void){

    char *texto;
    printf("Digite um texto: ");
    scanf("%s", texto);

    converte(texto);

    printf("Texto = %s", texto);
    return 0;
}
void converte(char *v){
    while(*v != '\0'){
        if(*v >= 97 && *v <= 122)
            *v -= 32;
        v++;
    }
}
