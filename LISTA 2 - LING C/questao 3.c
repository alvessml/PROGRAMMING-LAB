#include <stdio.h>

int main(){
    unsigned int numero, fat;

    puts("Digite um número para saber seu fatorial: ");
    scanf("%d", & numero);

    fat = 1;
    int k = numero;
    for(k; k > 0; k--){
        fat *= k;
    }

    printf("O fatorial de %d é: %d\n", numero, fat);

    return 0;
}