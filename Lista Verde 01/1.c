#include <stdio.h>

int main() {

    int Numero, Centena, Dezena, Unidade, NumeroInvertido, Aux;

    printf("Digite um número CDU: ");
    scanf("%d", &Numero);

    // Separar as unidades, dezenas e centenas do número
    Centena = Numero % 10; // Obtém a última casa (centena)
    Aux = (Numero / 10);
    Dezena = Aux % 10; // Obtém a segunda casa (dezena)
    Aux = (Aux / 10);
    Unidade = Aux % 10; // Obtém a primeira casa (unidade)

    // Inverter o número reorganizando as casas
    NumeroInvertido = Centena * 100 + Dezena * 10 + Unidade;

    printf("Número invertido: %d", NumeroInvertido);

    return 0;
}
