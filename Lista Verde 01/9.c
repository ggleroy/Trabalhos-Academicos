#include <stdio.h>

int main() {
    /* Calcular e mostrar o resultado da divisão entre um numerador e um denominador. */

    float numerador, denominador, resultado;

    // Solicita o numerador e o denominador ao usuário
    printf("Qual é o numerador? ");
    scanf("%f", &numerador);

    printf("Qual é o denominador? ");
    scanf("%f", &denominador);

    // Calcula o resultado da divisão
    resultado = numerador / denominador;

    // Imprime o resultado da divisão
    printf("Resultado: %f", resultado);

    return 0;
}
