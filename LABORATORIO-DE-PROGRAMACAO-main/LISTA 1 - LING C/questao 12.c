#include <stdio.h>

int main() {
    int x, y, soma, produto, diferenca, quociente, resto_divisao;

    printf("Digite um número: ");
    scanf("%d", & x);

    printf("Digite outro número: ");
    scanf("%d", & y);

    soma = x + y;
    produto = x * y;
    diferenca = x - y;
    quociente = x / y;
    resto_divisao = x % y;

    printf("A soma destes será: %d, produto será: %d, diferença é: %d, quociente será: %d e resto da divisão será: %d \n", soma, produto, diferenca, quociente, resto_divisao);

    return 0;
}