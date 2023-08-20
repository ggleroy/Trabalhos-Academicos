#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store input and calculated values
    float base, altura, perimetro, area, diagonal;

    // Prompt user for input
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    // Calculate perimeter, area, and diagonal
    perimetro = (base + altura) * 2;
    area = base * altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    // Display the calculated values
    printf("Seu perímetro é %f, sua área é %f e sua diagonal é %f", perimetro, area, diagonal);

    return 0;
}
