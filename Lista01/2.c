#include <stdio.h>

int main() {
    // Declare variables
    float salmin, kmonthly, kunitreal, real, topayamount, discountedprice;

    // Prompt user for input
    printf("Qual o valor do salário mínimo? ");
    scanf("%f", &salmin);

    printf("Qual é o gasto mensal em kilowatt? ");
    scanf("%f", &kmonthly);

    // Define the cost per kilowatt and calculate cost per unit based on salary minimum
    real = 5.24;
    kunitreal = real * (salmin / 700);

    // Calculate the total cost to be paid before discount
    topayamount = kunitreal * kmonthly;

    // Calculate the cost with a 10% discount
    discountedprice = (topayamount * 90) / 100;

    // Display the results
    printf("Cada kilowatt vale R$%.2f, o valor inteiro a ser pago é R$%.2f, e o novo valor já com desconto é R$%.2f.", kunitreal, topayamount, discountedprice);
    
    return 0;
}
