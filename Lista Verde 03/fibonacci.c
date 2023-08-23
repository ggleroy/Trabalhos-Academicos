#include <stdio.h>

int main()
{
    int a = 0, b = 1, c = a + b; // Inicialização dos primeiros termos da sequência de Fibonacci
    int ini, count;

    // Leitura do valor de contagem
    scanf("%i", &count);

    // Imprimindo os dois primeiros termos da sequência
    printf("1 1 ");

    // Loop para gerar e imprimir os próximos termos da sequência
    for (ini = count; ini > 0; ini--) {
        a = b; // O valor atual de 'b' passa a ser 'a'
        b = c; // O valor atual de 'c' passa a ser 'b'
        c = a + b; // Calcula o próximo termo da sequência
        printf("%i ", c); // Imprime o próximo termo
    }

    return 0;
}
