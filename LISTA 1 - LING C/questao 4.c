#include <stdio.h>

int main() {
    int x;

    puts("Digite um valor inteiro qualquer: ");
    scanf("%d", & x);

    printf("O quadrado do valor que você digitou será: %d\n", x*x);
    printf("O triplo do valor que você digitou será: %d\n", x*3);
    printf("A métade do valor que você digitou será: %d\n", x/2);

    return 0;
}