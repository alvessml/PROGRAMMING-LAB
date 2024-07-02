#include <stdio.h>
#include <math.h>


int main(){
    int x, y, resultado;

    printf("Digite um número para multiplicar por dois: ");
    scanf("%d", & x);

    printf("Digite um número cujo o resultado da multiplicação por dois irá elevar a esse número: ");
    scanf("%d", & y);
    
    // IRÁ MULTIPLICAR O X POR 2^Y: Ex: x=5 e y=2 => 5 x 2² = 20
    resultado = x<<y;

    printf("\nO resultado do produto de %d vezes 2 elevado a %d é: %d \n", x, y, resultado);

    return 0;
}