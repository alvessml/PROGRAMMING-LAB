#include <stdio.h>
#define TAM 5

int main() {

    // NÂO PODE FAZER!

    // int n;
    // scanf("%d", & n);
    // char x[n];

    // porque não fazer?
    // Se o usuário digitar um valor muito grande pode ocorrer travamento do programa;

    // CORRETO:
    // usar função de alocação do sistema

    char x[TAM];

    for(int k=0; k < TAM; k++) {
        printf("%d", x[k]);
    }


    return 0;
}