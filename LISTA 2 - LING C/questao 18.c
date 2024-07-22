#include <stdio.h>


int main(){
    int quadros = 64;
    unsigned long long total = 0;
    unsigned long long graos_atual;

    for(int i = 0; i < quadros; i++){
        graos_atual = 1ULL << i; // usando bitshift (operação bit a bit de que move os bits de núemros para a esquerda e direita.)
        total += graos_atual;
    }

    printf("O somatório do número de grãos de trigo no tabuleiro de xadrez é: %llu\n", total);
    return 0;
}