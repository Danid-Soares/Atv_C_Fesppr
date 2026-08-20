#include <stdio.h>

void vetores() { 
    int vet[5];
    int i;

    // Lendo os valores
    for(i = 0; i < 5; i++) {
        printf("Insira o elemento da posição %d: ", i);
        scanf("%d", &vet[i]); // Usa & para o scanf
    }

    // Exibindo os valores
    for(i = 0; i < 5; i++) {
        printf("%d ", vet[i]); // Apenas vet[i] sem % ou &
    }
    printf("\n");
}

void matrizes() {
    // Matriz 3x5 (3 linhas, 5 colunas)
    int vet[3][5] = {
        {1, 2, 3, 4, 5}, 
        {6, 7, 8, 9, 10}, 
        {11, 12, 13, 14, 15}
    };
    int i, j;

    for(i = 0; i < 3; i++) {       // Percorre as 3 linhas
        for(j = 0; j < 5; j++) {   // Percorre as 5 colunas (j < 5)
            printf("%d ", vet[i][j]); // Usa 'vet' (mesmo nome da declaração)
        }
        printf("\n"); // Pula linha ao fim de cada fileira
    }
}

int main(int argc, char * argv[]){
    //vetores();
    //matrizes();

    return 0;
}
