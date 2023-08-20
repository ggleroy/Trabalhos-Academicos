#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Fazer um algoritmo que leia a temperatura da água e 
    mostre se está no estado sólido, líquido ou gasoso. */

    // Declare a variable to store the water temperature.
    float tempagua;

    // Prompt the user to input the water temperature.
    scanf("%f", &tempagua);

    // Check if the temperature is below 0, indicating solid state.
    if (tempagua < 0) {
        printf("Sólido");
    }
    
    // Check if the temperature is at or above 100, indicating gaseous state.
    if (tempagua >= 100) {
        printf("Gasoso");
    }

    // Check if the temperature is between 0 (inclusive) and 100 (exclusive), indicating liquid state.
    if ((tempagua >= 0) && (tempagua < 100)) {
        printf("Líquido");
    }

    return 0; // Indicate successful program execution.
}
