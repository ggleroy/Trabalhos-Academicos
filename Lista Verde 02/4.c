#include <stdio.h>
#include <stdlib.h>

int main() {
    // Este programa verifica a faixa em que a nota do usuário se encaixa e imprime a mensagem correspondente.

    int nota;

    // Solicita ao usuário para inserir a nota
    printf("Insira a nota: ");
    scanf("%i", &nota);

    // Verifica em qual faixa a nota se encaixa e imprime a mensagem correspondente
    if (nota < 5) {
        printf("Insatisfatório\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Regular\n");
    } else if (nota >= 7 && nota < 8) {
        printf("Bom\n");
    } else if (nota >= 8 && nota <= 10) {
        printf("Ótimo\n");
    } else {
        printf("Nota inválida\n"); // Mensagem de erro se a nota estiver fora do intervalo [0, 10]
    }

    return 0;
}
