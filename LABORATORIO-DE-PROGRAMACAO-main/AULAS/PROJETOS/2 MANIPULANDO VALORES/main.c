#include <stdio.h>

int main() {
    int a, b;

    puts("Digite um número qualquer: ");
    scanf("%d", &a);

    puts("Digite outro número qualquer: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Os dois números são iguais %d\n", a);
    }
    else if (a > b) {
        printf("Maior valor é %d e o menor %d\n", a, b);
    }
    else {
        printf("Maior valor é %d e o menor %d\n", b, a);
    }

    return 0;
}