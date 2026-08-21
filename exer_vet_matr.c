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

    void exer3(){
        int vet[10] = {12, 32, 11, 44, 55, 67, 68, 69, 1, 5};
        int numeroBuscado;
        int contador = 0;

        // 1. Pede o número que deseja buscar UMA ÚNICA VEZ (fora de laço)
        printf("Digite aqui o numero:");
        scanf("%d", &numeroBuscado);

        // 2. Percorre todo o vetor até o índice 9 (i < 10)
        for(i = 0; i < 10; i++){
            if (vet[i] == numeroBuscado){
                printf("Numero encontrado %d\n", i);
                contador ++; // Soma no total de ocorrências
            }
        }

        // 3. Verificação final fora do laço
        if (contador > 0){
            printf("O numero %d foi encontrado %d vezes no vetor.\n", numeroBuscado, contador);
        }
        else {
            printf("Numero não encontrado no vetor.\n");
        }
    }

    void exer4(){
        int A[5] = {1, 2, 3, 4, 5};
        int B[5];
        int i;

        // Copiando de A para B de forma invertida
        for(i = 0; i < 5; i++){
           B[i] = A[4 - i];// Pega do final de A e coloca no início de B
        }

        printf("Vetor B (invertido): ");
        for(i = 0; i < 5; i++){
            printf("%d", B[i]);
        }
        printf("\n");
    }

    void exer5(){
        int mat[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
        int maior;
        int linhaMaior = 0;
        int colunaMaior = 0;
        int i,j;

        // 1. Leitura dos dados
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                scanf("%d", &mat[i][j]);
            }
        }

        // 2. Define o ponto de partida FORA dos laços
        maior = mat[0][0];

        // 3. Busca pelo maior elemento e suas coordenadas (Sua lógica perfeita!)
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                if(mat[i][j] > maior){
                    maior = mat[i][j];
                    linhaMaior = i;
                    colunaMaior = j;
                }
            }
        }
        // 4. Impressão dos resultados
        printf("O maior numero e %d e ele está na linha %d na coluna %d", maior, linhaMaior, colunaMaior);
    }

    void exer6(){
        int mat[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
        int somaColunas[3];
        int i, j;

        // 1. Processamento: Calculando a soma de cada coluna
        for(j = 0; j < 3; j++){
            somaColuna[j] = 0; // Zera a soma da coluna j antes de somar as linhas

            for(i = 0; i < 3; i++){
                somaColunas[j] += mat[i][j]; // Soma todos os elementos da coluna j
            }
        }

        // 2. Impressão dos resultados (j < 3 para exibir as 3 colunas)
        for(j = 0; j < 3; j++){
            printf("A soma das colunas deu %d", somaColunas[j]);
        }
    }

    void exer7(){
        int vet[8] = {1, -2, 3, -4, 5, -6, 7 ,-8};

    }

int main(int argv, char * argc[]){
    //exer1();
    //exer2();
    //exer3();
    //exer4();
    //exer5();
    //exer6();
    return 0;
}
