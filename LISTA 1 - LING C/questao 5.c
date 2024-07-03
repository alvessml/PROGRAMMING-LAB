#include <stdio.h>

int main() {
    float x, p;

    puts("Digite o valor bruto da conta: ");
    scanf("%f", & x);

    p = (x * 0.1) + x;

    printf("O valor a pagar com a taxa do garçom incluído será: %.2f \n", p);

    return 0;
}