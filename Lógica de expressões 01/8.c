#include <stdio.h>

int main()
{
    int x = 1, a = 3, b = 5, c = 8, d = 7;

    // Print the condition being evaluated
    printf("Condição: (d > 0) ou (c > 5)\n");

    // Check if the condition is true
    if ((d > 0) || (c > 5))
    {
        printf("Resultado: Verdadeiro\n");
    }
    else
    {
        printf("Resultado: Falso\n");
    }

    return 0;
}
