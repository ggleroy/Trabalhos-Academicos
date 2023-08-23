#include <stdio.h>

int main()
{
    int x = 1, a = 3, b = 5, c = 8, d = 7;

    // Verifica a expressão (X < 1) e não(B > D)
    printf("(X < 1) e não(B > D): ");

    // Usando a estrutura de controle if para verificar a condição
    if ((x < 1) && (!(b > d)))
    {
        printf("verdadeiro\n"); // Se a expressão for verdadeira
    }
    else
    {
        printf("falso\n"); // Se a expressão for falsa
    }

    return 0;
}
