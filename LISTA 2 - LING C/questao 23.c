#include <stdio.h>


int main(){
    int x = 10, y = 10;
    int preDecre, posDecre;

    // Pré-decremento
    preDecre = --x; // x é decrementado e após contido no preDecre.
    //Pós-decremento
    posDecre = y--; // y é contido em posDecre e depois decrementado.

    printf("Valor de 'x' após pré-decremento: %d\n", x);
    printf("Valor de 'y' após pós-decremento: %d\n", y);

    printf("Resultado do pre-decremento: %d\n", preDecre);
    printf("Resultado do pós-decremento: %d\n", posDecre);

    return 0;
}