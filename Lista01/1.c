#include <stdio.h>

int main() {
    int n, reverso = 0, rem;
    printf("Digite um número:");
    scanf("%i", &n);
    
    // Loop to reverse the digits of the input number
    while (n != 0) {
        rem = n % 10;        // Get the last digit of the number
        reverso = reverso * 10 + rem; // Add the last digit to the reversed number
        n /= 10;             // Remove the last digit from the input number
    }
    
    printf("Número reverso: %i", reverso); // Print the reversed number
    return 0;
}