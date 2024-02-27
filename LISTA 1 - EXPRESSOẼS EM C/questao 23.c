#include <stdio.h>

int main() {
    int x;
    puts("Entre com um valor de três digitos");
    scanf("%d", & x);

    int c, d, u, y;

    c = x / 100;
    d = (x % 100) / 10;
    u = (x % 100) % 10;

    y = u * 100 + d * 10 + c;

    printf("O valor de x: %d, o valor de y = %d \n", x, y);

    return 0;
}