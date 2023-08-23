#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao
    mesmo tempo), por 2 e por 5. Caso algum número não seja divisível por nenhum desses
    números, mostre a mensagem “Número não é divisível pelos valores”. Apresente também
    ao final a quantidade de números divisíveis por 3 e 9, por 2 e por 5.*/

    int cont, q39 = 0, q2 = 0, q5 = 0, numero, achei;

    // Loop para receber dez números
    for (cont = 1; cont <= 10; cont++)
    {
        printf("Digite o %dº número: ", cont);
        scanf("%d", &numero);
        
        achei = 0; // Reinicializa a variável de controle para cada número

        // Verificações de divisibilidade
        if (numero % 3 == 0 && numero % 9 == 0)
        {
            q39++;
            achei = 1;
        }
        if (numero % 2 == 0)
        {
            q2++;
            achei = 1;
        }
        if (numero % 5 == 0)
        {
            q5++;
            achei = 1;
        }

        // Se não encontrou nenhuma divisibilidade, exibe a mensagem
        if (!achei)
        {
            printf("Número não é divisível pelos valores\n");
        }
    }

    // Apresenta os resultados
    printf("%d números são divisíveis por 3 e por 9\n", q39);
    printf("%d números são divisíveis por 2\n", q2);
    printf("%d números são divisíveis por 5\n", q5);

    return 0;
}
