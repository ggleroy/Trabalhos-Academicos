#include <stdio.h>

int main() {
    /* Trocar os valores de duas variáveis A e B. */

    float A, B, C;

    // Solicita os valores de A e B ao usuário
    printf("Informe o valor de A: ");
    scanf("%f", &A);

    printf("Informe o valor de B: ");
    scanf("%f", &B);

    // Troca os valores das variáveis A e B usando a variável temporária C
    C = B;
    B = A;
    A = C;

    // Imprime os valores trocados de A e B
    printf("%f %f", A, B);

    return 0;
}
