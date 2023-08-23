#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele
    comercializa. Para isto, mandou digitar uma linha para cada mercadoria com o preço de
    compra e de venda de cada uma. A última linha contém preço de compra igual a 0. Escreva
    um programa que:
    a) Determine e escreva quantas mercadorias proporcionaram:
    i) Lucro < 10%
    ii) 10% <= lucro <= 20%
    iii) Lucro > 20%
    b) Determine e escreva o valor total de compra e de venda de todas as mercadorias,
    assim como o lucro total.*/

    float precoCompra, precoVenda, lucro, profitpercentage, totalcompra = 0, totalvenda = 0, totallucro = 0;
    int profitqlow = 0, profitqmed = 0, profitqhigh = 0;

    // Loop para entrada dos preços de compra e venda
    while (precoCompra != 0)
    {
        scanf("%f", &precoCompra);

        // Se o preço de compra for 0, sai do loop
        if (precoCompra == 0)
            break;

        scanf("%f", &precoVenda);

        // Calcula o total de compra e de venda
        totalcompra += precoCompra;
        totalvenda += precoVenda;

        // Calcula o lucro e o total de lucro
        lucro = precoVenda - precoCompra;
        totallucro += lucro;

        // Calcula a porcentagem de lucro
        profitpercentage = (lucro / precoCompra) * 100;

        // Classifica o lucro em categorias e incrementa as contagens
        if (profitpercentage < 10)
        {
            profitqlow++;
        }
        else if (profitpercentage >= 10 && profitpercentage <= 20)
        {
            profitqmed++;
        }
        else
        {
            profitqhigh++;
        }
    }

    // Imprime os resultados
    printf("%i\n%i\n%i\n%.2f\n%.2f\n%.2f", profitqlow, profitqmed, profitqhigh, totalcompra, totalvenda, totallucro);
    
    return 0;
}
