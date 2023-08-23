#include <stdio.h>

int main()
{
    int x = 1, a = 3, b = 5, c = 8, d = 7;

    // Print the condition being evaluated
    printf("Condição: (a > b) || (c > b)\n");

    // Check if the condition is true
    if ((a > b) || (c > b))
    {
        printf("Resultado: Verdadeiro\n");
    }
    else
    {
        printf("Resultado: Falso\n");
    }

    return 0;
}
