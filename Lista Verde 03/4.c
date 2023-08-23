#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor
    de E: E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!*/
    
    int n;        // Número inteiro e positivo fornecido pelo usuário
    float e = 1;  // Valor de E
    float nfatorial = 1;  // Fatorial de n
    int i;        // Variável de iteração
    
    // Solicitar ao usuário para inserir o valor de N
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    // Calcular o valor de E usando a fórmula dada
    for (i = 1; i <= n; i++) {
        nfatorial *= i;  // Calcula o fatorial de i
        e += 1.0 / nfatorial;  // Adiciona o termo atual à soma de E
    }

    // Imprimir o valor de E calculado
    printf("O valor de E é: %.6f\n", e);

    return 0;
}
