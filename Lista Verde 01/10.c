#include <stdio.h>

int main() {
    /* Calcular e mostrar o total de minutos correspondente a um dado número de horas e minutos. */

    int horas, minutos, totalMinutos;

    // Solicita o número de horas e minutos ao usuário
    printf("Quantas horas? ");
    scanf("%d", &horas);

    printf("Quantos minutos? ");
    scanf("%d", &minutos);

    // Converte as horas em minutos e soma com os minutos fornecidos
    totalMinutos = (horas * 60) + minutos;

    // Imprime o total de minutos
    printf("Total de minutos: %d", totalMinutos);

    return 0;
}
