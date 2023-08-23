#include <stdio.h>

int main() {

    int aux, TV1 = 0, TV2 = 0, TV3 = 0, TV4 = 0, TVN = 0, TVB = 0;

    // Loop para receber os valores até que aux seja igual a 0
    while (aux != 0) {
        scanf("%d", &aux);

        switch (aux) {
            case 1: 
                ++TV1;
                break;
            case 2: 
                ++TV2;
                break;
            case 3: 
                ++TV3;
                break;
            case 4: 
                ++TV4;
                break;
            case 5: 
                ++TVN;
                break;
            case 6: 
                ++TVB;
                break;  
        }
    }

    // Imprime a contagem de cada valor
    printf("%d\n", TV1);
    printf("%d\n", TV2);
    printf("%d\n", TV3);
    printf("%d\n", TV4);
    printf("%d\n", TVN);
    printf("%d\n", TVB);

    return 0;
}
