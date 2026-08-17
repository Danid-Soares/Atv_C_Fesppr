#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int arg, char *argv[]){
    const float estoque_litros = 100;
    const float preco_litro = 6.89;
    float quantidade_desejada;

    printf("Informe a quantidade desejada de Gasolina(L): ");
    scanf("%f", &quantidade_desejada);

    float valor_toral = quantidade_desejada * preco_litro;
    float estoque_restante = estoque_inicial - quantidade_desejada;

    printf("\n --- Resumo do Pedido ---\n");
    printf("Valor total a pagar: R$ %.2f\n", valor_total);
    printf("Litros restantes no estoque: %.2f L\n", estoque_restante);

    return 0;
}
