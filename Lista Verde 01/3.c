#include <stdio.h>
#include <math.h>

int main() {
    /* Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal */

    float base, altura, perimetro, area, diagonal;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = (base + altura) * 2;
    area = base * altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
