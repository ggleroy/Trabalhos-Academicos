#include <stdio.h>
#include <math.h>

int main() {
    /* Calcular a hipotenusa de um triângulo retângulo com base nos catetos dados. */

    float catop, catad, hipo;

    // Solicita os valores dos catetos ao usuário
    printf("Qual o valor do cateto oposto: ");
    scanf("%f", &catop);

    printf("Qual o valor do cateto adjacente: ");
    scanf("%f", &catad);

    // Calcula a hipotenusa usando o teorema de Pitágoras
    hipo = sqrt((catad * catad) + (catop * catop));

    printf("Hipotenusa: %.2f", hipo);

    return 0;
}
