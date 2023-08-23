#include <stdio.h>
#include <stdlib.h>

int main() {
    // Este programa lê 2 números inteiros, calcula sua soma e aplica ajustes baseados no resultado.

    int n1, n2, sum;

    // Solicita ao usuário para inserir dois números
    printf("Insira o primeiro número: ");
    scanf("%i", &n1);

    printf("Insira o segundo número: ");
    scanf("%i", &n2);

    // Calcula a soma dos números
    sum = n1 + n2;

    // Verifica se a soma é maior ou igual a 10
    if (sum >= 10) {
        sum += 5;  // Adiciona 5 à soma
        printf("A soma é maior ou igual a 10. Resultado após adicionar 5: %i\n", sum);
    } else {
        sum += 7;  // Adiciona 7 à soma
        printf("A soma é menor que 10. Resultado após adicionar 7: %i\n", sum);
    }

    return 0;
}

