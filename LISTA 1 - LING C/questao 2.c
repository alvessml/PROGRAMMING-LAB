#include <stdio.h>

int main() {
    int x;
    puts("Digite um número inteiro: ");
    scanf("%d", & x);

    printf("O valor que você digitou em hexadecimal será: %0X \n", x);
    printf("O valor que você digitou em octal será: %o \n", x);

    return 0;
}