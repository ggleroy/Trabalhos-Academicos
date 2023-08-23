#include <stdio.h>

int main()
{
    int x = 1, a = 3, b = 5, c = 8, d = 7;

    // Print the condition being evaluated
    printf("Condição: !(d > 3) ou !(b < 7)\n");

    // Check if the condition is true
    if (!(d > 3) || !(b < 7))
    {
        printf("Resultado: Verdadeiro\n");
    }
    else
    {
        printf("Resultado: Falso\n");
    }

    return 0;
}
