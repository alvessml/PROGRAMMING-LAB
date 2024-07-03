#include <stdio.h>

int main(){
    int x1, x2, x3 ;
    x1 = 7 + 3*6/2-1;
    // Ordem do x1 será primeiro o 3*6 / 2 depois a soma e subtração.
    printf("Resultado do x1 será igual a %d \n", x1);

    x2 = 2%2 + 2*2-2/2;
    // Ordem do x2 será resto da divisão de 2 % 2, depois será multiplicação de 2*2, depois -2/2, por fim será a soma.
    printf("Resultado do x2 será igual a %d \n", x2);

    x3 = (3 * 9 * (3 + (9*3/ (3) ) ) );
    // Ordem do x3 será multipĺicação de 9*3 depois a divisão por 3, após a soma disso por 3, por fim 
    // a multiplicação do resultado disso por 9 e 3.
    printf("Resultado do x3 será igual a %d \n", x3);

    return 0;
}