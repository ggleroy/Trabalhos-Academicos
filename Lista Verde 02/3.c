#include <stdio.h>
#include <stdlib.h>

int main() {
    // Este programa lê o ano de nascimento de uma pessoa e calcula sua idade, considerando o ano atual.
    // Também verifica se a pessoa já fez aniversário no ano atual e se tem idade para obter a carteira de habilitação.

    int anonascimento, anoatual, idade;
    char resposta;

    anoatual = 2023;

    // Solicita ao usuário o ano de nascimento
    printf("Insira o ano de nascimento: ");
    scanf("%i", &anonascimento);

    idade = anoatual - anonascimento;

    // Limpa o buffer do stdin antes de ler a resposta (caractere)
    while ((getchar()) != '\n');

    // Pergunta se a pessoa já fez aniversário no ano atual
    printf("Você já fez aniversário este ano? (S/N): ");
    scanf("%c", &resposta);

    // Verifica se a pessoa já fez aniversário e ajusta a idade se necessário
    if (resposta == 'N' || resposta == 'n') {
        idade--;
    }

    // Verifica se a pessoa tem idade para obter a carteira de habilitação (18 anos ou mais)
    if (idade >= 18) {
        printf("Tem idade para conseguir a carteira de habilitação: %i anos\n", idade);
    } else {
        printf("Não tem idade para conseguir a carteira de habilitação: %i anos\n", idade);
    }

    return 0;
}
