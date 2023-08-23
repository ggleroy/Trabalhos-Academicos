#include <stdio.h>
#include <stdlib.h>

int main() {
    // Este programa lê dois números e imprime o maior deles.

    int n1, n2;

    // Solicita ao usuário para inserir dois números
    printf("Insira o primeiro número: ");
    scanf("%i", &n1);

    printf("Insira o segundo número: ");
    scanf("%i", &n2);

    // Verifica qual dos números é maior
    if (n1 > n2) {
        printf("O maior número é: %i\n", n1);
    } else {
        printf("O maior número é: %i\n", n2);
    }

    return 0;
}
