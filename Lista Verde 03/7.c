#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int elementos, total, soma;
    soma = 1;   // Inicialização do valor de soma
    total = 0;  // Inicialização do valor total

    // Solicitar ao usuário o número de elementos
    printf("Digite o número de elementos: ");
    scanf("%i", &elementos);

    // Loop para somar os valores de 1 a 'elementos'
    while (elementos > 0) {
        total = total + soma;  // Adicionar 'soma' ao 'total'
        elementos--;  // Decrementar 'elementos' em 1
    }

    // Imprimir o resultado total da soma
    printf("O total da soma é: %i", total);

    return 0;
}
