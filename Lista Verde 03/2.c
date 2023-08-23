#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Variáveis para contar e armazenar os percentuais
    float posit = 0, negat = 0, zero = 0, total, aux, count, positcent, negatcent, zerocent;

    // Solicitar ao usuário a quantidade de números a serem inseridos
    printf("Quantos números deseja inserir? ");
    scanf("%f", &total);

    count = 0; // Inicializar o contador
    while (count < total) {
        // Solicitar ao usuário o número atual da sequência
        printf("Insira o número %d: ", (int)count + 1);
        scanf("%f", &aux);

        if (aux > 0) {
            ++posit; // Incrementar o contador de positivos
        } else if (aux < 0) {
            ++negat; // Incrementar o contador de negativos
        } else {
            ++zero; // Incrementar o contador de zeros
        }

        ++count; // Incrementar o contador geral
    }

    // Calcular os percentuais
    positcent = (posit / total) * 100;
    negatcent = (negat / total) * 100;
    zerocent = (zero / total) * 100;

    // Imprimir os resultados em formato de percentual
    printf("%.2f%% POSITIVOS\n", positcent);
    printf("%.2f%% NEGATIVOS\n", negatcent);
    printf("%.2f%% ZEROS\n", zerocent);

    return 0;
}
