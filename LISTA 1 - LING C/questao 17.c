#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, absx;

    printf("Digite um número: ");
    scanf("%d", & x);

    absx = abs(x);

    printf("\nO Valor absoluto deste número é %d.\n", absx);

    return 0;
}