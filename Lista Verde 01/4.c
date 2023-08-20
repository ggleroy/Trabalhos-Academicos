#include <stdio.h>
#include <math.h>

int main() {
    /* Ler o raio de um círculo e mostrar o seu perímetro e área. */

    float raio, perimetro, area;
   
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    perimetro = raio * M_PI * 2; // Cálculo do perímetro do círculo
    area = pow(raio, 2) * M_PI; // Cálculo da área do círculo

    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);

    return 0;
}
