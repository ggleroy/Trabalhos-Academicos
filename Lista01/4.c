#include <stdio.h>
#include <math.h>

int main()
{
    //Ler com o raio de um círculo e mostrar o seu perímetro e área.

    float raio, perimetro, area;
   
   
    printf("Digite o raio do círculo:");
    scanf("%f",&raio);

    perimetro=raio*M_PI*2;
    area=pow(raio,2)*M_PI;

    printf("Seu perímetro é %f e sua área é %f", perimetro, area);

    return 0;
}