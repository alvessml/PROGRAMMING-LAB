#include <stdio.h>

int main() {
    float x;

    puts("Digite um número real: ");
    scanf("%f", & x);

    printf("O valor que você digitou sendo uma casa decimal será: %.1f /n", x);

    return 0;
}