#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int arg, char *argv[]){
    float raio; 
    float area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = 3.14159 * raio * raio;

    printf("A area do circulo e : %.2f\n", area);
    
    return 0;
}
