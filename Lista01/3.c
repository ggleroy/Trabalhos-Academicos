#include <stdio.h>
#include <math.h>
int main()
{
    //Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal

    float base, altura, perimetro, area, diagonal;
    printf("Digite a base do retângulo: ");
    scanf("%f",&base);

    printf("Digite a altura do retângulo: ");
    scanf("%f",&altura);

    perimetro=(base+altura)*2;
    area=base*altura;
    diagonal=sqrt((pow(base,2)+pow(altura,2)));

    printf("Seu perímetro é %f, sua área é %f e sua diagonal é %f", perimetro, area, diagonal);

    return 0;
}