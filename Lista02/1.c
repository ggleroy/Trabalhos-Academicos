#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare a variable to store the input number.
    int n;

    // Prompt the user to input a number.
    printf("Digite um número: ");
    scanf("%i", &n);

    // Check if the number is even (divisible by 2) using the modulus operator (%).
    if (n % 2 == 0) {
        printf("O número é par.");
    } else {
        printf("O número é ímpar.");
    }

    return 0; // Indicate successful program execution.
}
