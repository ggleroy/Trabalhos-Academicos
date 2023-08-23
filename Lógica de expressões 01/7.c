#include <stdio.h>

int main()
{
    int x = 1, a = 3, b = 5, c = 8, d = 7;

    // Print the condition being evaluated
    printf("Condição: (x < 1) e (b >= d)\n");

    // Check if the condition is true
    if ((x < 1) && (b >= d))
    {
        printf("Resultado: Verdadeiro\n");
    }
    else
    {
        printf("Resultado: Falso\n");
    }

    return 0;
}
