#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store input and calculated values
    float raio, perimetro, area;
   
    // Prompt user for input
    printf("Digite o raio do círculo:");
    scanf("%f", &raio);

    // Calculate perimeter and area using mathematical formulas
    perimetro = raio * M_PI * 2;
    area = pow(raio, 2) * M_PI;

    // Display the calculated values
    printf("Seu perímetro é %f e sua área é %f", perimetro, area);

    return 0;
}
