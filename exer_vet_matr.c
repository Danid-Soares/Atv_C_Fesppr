#include <stdio.h>

    void exer1(){
        int vet[6];
        int i, aux;

        // 1. Leitura do vetor
        for(i = 0; i < 6; i++){
        printf("Digite aqui os valores informados:", i);
        scanf("%d", &vet[i]);
        }

        // 2. Lógica de inversão (até a metade)
        for(i=0; i<3; i++){
            //Salve o valor da esquerda no aux
            aux = vet[i];
            //Copie o valor lá da ponta direita (5 - i) para a posição da esquerda (vet[i])
            vet[i] = vet[5- i];
            //Coloque o valor salvo no aux na ponta direita (5 - i)
            vet[5 - i] = aux;
        }

        // 3. Imprimindo o vetor invertido
        for(i = 0; i < 6; i++) {
        printf("%d ", vet[i]); // Apenas vet[i] sem % ou &
        }
        printf("\n");
}

    void exer2(){
        int mat[3][3];
        int contadorPares = 0;
        int i, j;

        //leitura
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
        printf("Digite 6 numeros:", i);
        scanf("%d", &mat[i][j]);
            }
        }

        //logica para identificar os numeros pares
        for (i=0; i<3; i++){
            for(j=0; j<3; j++){
                if(mat[i][j] % 2 == 0){
                    printf("Par encontrado: %d na posição [%d][%d]\n", mat[i][j], i, j);
                    contadorPares++; // Soma 1 no total de pares
                }

            }
            
        }

        printf("\nTotal de números pares digitados: %d\n", contadorPares);

    }

int main(int argv, char * argc[]){
    //exer1();
    //exer2();
    return 0;
}
