#include <stdio.h>

int main() {
    /* Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, 
    faça um algoritmo que leia o valor do salário mínimo e a quantidade de kilowatt 
    gasta por uma residência, calcule e mostre: o valor em reais de cada kilowatt; 
    o valor em reais a ser pago; e o novo valor a ser pago por essa residência 
    com um desconto de 10% */

    float salmin, kmonthly, kunitreal, topayamount, discountedprice;

    printf("Qual o valor do salário mínimo? ");
    scanf("%f", &salmin);

    printf("Qual é o gasto mensal em kilowatt? ");
    scanf("%f", &kmonthly);

    kunitreal = (salmin / 700); // Cálculo do valor em reais de cada kilowatt
    topayamount = kunitreal * kmonthly; // Cálculo do valor a ser pago
    discountedprice = topayamount * 0.9; // Cálculo do valor com desconto de 10%

    printf("Cada kilowatt vale R$%.2f, o valor inteiro a ser pago é R$%.2f, e o novo valor já com desconto é R$%.2f.",
           kunitreal, topayamount, discountedprice);

    return 0;
}
