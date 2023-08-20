#include <stdio.h>

int main() {
    /* Calcular e mostrar o décimo termo de uma progressão aritmética. */

    int Razao, PrimeiroTermo, DecimoTermo;

    // Solicita a razão da progressão aritmética e o primeiro termo ao usuário
    printf("Qual a razão da progressão aritmética: ");
    scanf("%d", &Razao);

    printf("Qual é o primeiro termo: ");
    scanf("%d", &PrimeiroTermo);

    // Calcula o décimo termo usando a fórmula a_n = a_1 + (n - 1) * r
    DecimoTermo = PrimeiroTermo + (9 * Razao);

    // Imprime o décimo termo calculado
    printf("%d", DecimoTermo);

    return 0;
}
