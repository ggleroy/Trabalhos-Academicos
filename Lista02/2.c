#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Fazer um algoritmo que peça o nome e as 3 notas de um aluno e mostre, além do nome e
    do valor da média do aluno, uma mensagem de "Aprovado", caso a média seja igual ou 
    superior a 6, ou a mensagem "Reprovado", caso contrário. */

    // Declare variables to store the three grades and the calculated average.
    float nota1, nota2, nota3, media;

    // Prompt the user to input three grades.
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calculate the average of the three grades.
    media = (nota1 + nota2 + nota3) / 3;

    // Check if the average is greater than or equal to 6.
    if (media >= 6) {
        printf("Aprovado.");
    } else {
        printf("Reprovado.");
    }
    
    return 0; // Indicate successful program execution.
}
