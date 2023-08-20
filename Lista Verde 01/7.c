#include <stdio.h>
#include <math.h>

int main() {
    /* Calcular e mostrar o quarto termo de uma progressão geométrica. */

    int Razao, PrimeiroTermo, QuartoTermo;

    // Solicita a razão da progressão geométrica e o primeiro termo ao usuário
    printf("Qual a razão da progressão geométrica: ");
    scanf("%d", &Razao);

    printf("Qual é o primeiro termo: ");
    scanf("%d", &PrimeiroTermo);

    // Calcula o quarto termo usando a fórmula a_n = a_1 * r^(n-1)
    QuartoTermo = PrimeiroTermo * pow(Razao, 3);

    // Imprime o quarto termo calculado
    printf("%d", QuartoTermo);

    return 0;
}
