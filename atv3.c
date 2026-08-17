#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main(int arg, char* argv[]){
    float raio, v;

    printf("Digite o valor do Raio: ");
    scanf("%f", &raio);

    v = (4.0/3.0) * 3.14 * pow(raio, 3);

    printf("O volume de uma esfera é: %2f\n", &raio);

    return 0;
}
