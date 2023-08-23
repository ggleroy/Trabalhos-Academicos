#include <stdio.h>

int main() {

    int NF, FTotal = 0, MedF, countF = 0;  // Variáveis relacionadas aos funcionários
    float salario, STotal = 0, countS = 0, MaiorS = 0, S100 = 0, MedS;  // Variáveis relacionadas aos salários

    while (salario != -1) {
        scanf("%f", &salario);

        if (salario == -1) {
            break;  // Se o valor for -1, encerra o loop
        }

        STotal += salario;
        ++countS;

        scanf("%d", &NF);
        FTotal += NF;
        ++countF;

        if (salario > MaiorS) {
            MaiorS = salario;
        }

        if (salario < 100) {
            ++S100;
        }
    }

    MedS = STotal / countS;
    MedF = FTotal / countF;
    S100 = S100 - 1;

    // Imprimindo os resultados
    printf("Média dos salários: %.2f\n", MedS);
    printf("Média do número de filhos: %d\n", MedF);
    printf("Maior salário: %.2f\n", MaiorS);
    printf("Quantidade de salários abaixo de 100: %.2f\n", S100);

    return 0;
}
