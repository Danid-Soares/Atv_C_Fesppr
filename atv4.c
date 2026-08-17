#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main(int arg, char * argv[]){
    int numero, antecessor, sucessor;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O numero digitado foi %i", numero);
    printf("Seu antecessor é %i", antecessor);
    printf("Seu sucessor é %i", sucessor);

    return 0;

}
