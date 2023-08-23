#include <stdio.h>

int main()
{
    int x = 1, a = 3, b = 5, c = 8, d = 7;

    // Verifica se a expressão !(x > 3) é verdadeira ou falsa
    printf("1 - não(x > 3): ");

    // Usando a estrutura de controle if para verificar a condição
    if (!(x > 3))
    {
        printf("verdadeiro\n"); // Se !(x > 3) for verdadeiro
    }
    else
    {
        printf("falso\n"); // Se !(x > 3) for falso
    }

    return 0;
}
