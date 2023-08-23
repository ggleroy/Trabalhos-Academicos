#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:
    S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
    O algoritmo deve escrever cada termo gerado e o valor final de S*/

    int n;
    float s = 0;

    // Solicitar ao usuário um valor inteiro e positivo para n
    printf("Digite um valor inteiro e positivo: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        float termo = 1.0 / i;  // Cálculo do termo atual da série
        s = s + termo;  // Adicionando o termo atual à soma
        printf("Termo %d: %.2f\n", i, termo);  // Imprimindo o termo atual
    }

    // Imprimindo o valor final da soma
    printf("Valor final de S: %.2f\n", s);

    return 0;
}
