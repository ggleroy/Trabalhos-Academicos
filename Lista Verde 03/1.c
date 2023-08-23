#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Variáveis para contar os diferentes tipos de números
    int posit = 0, negat = 0, zero = 0, total, aux, count;

    // Solicitar ao usuário a quantidade de números a serem inseridos
    printf("Quantos números deseja inserir? ");
    scanf("%d", &total);

    count = 0; // Inicializar o contador
    while (count < total) {
        // Solicitar ao usuário o número atual da sequência
        printf("Insira o número %d: ", count + 1);
        scanf("%d", &aux);

        if (aux > 0) {
            ++posit; // Incrementar o contador de positivos
        } else if (aux < 0) {
            ++negat; // Incrementar o contador de negativos
        } else {
            ++zero; // Incrementar o contador de zeros
        }

        ++count; // Incrementar o contador geral
    }

    // Imprimir os resultados
    printf("%d POSITIVOS\n", posit);
    printf("%d NEGATIVOS\n", negat);
    printf("%d ZEROS\n", zero);

    return 0;
}
