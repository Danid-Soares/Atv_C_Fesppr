#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char * argv[]){
    float custoconsumidor, custofabrica, distribuidor, impostos;

    printf("Digite o custo de Fabrica do veiculo:");
    scanf("%f", &custofabrica);

    distribuidor = custofabrica * 0.12;
    impostos = custofabrica * 0.45;
    custoconsumidor = impostos + distribuidor + custofabrica;

    printf("O custo de consumidor é: %f\n", custoconsumidor);

    return 0;
}
