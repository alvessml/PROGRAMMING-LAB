#include <stdio.h>

int main(){
    // ENTRADA
    int valor;

    printf("Digite um valor para mostrar a tabuada desse valor: ");
    scanf("%d", & valor);


    // PROCESSAMENTO / SAÍDA
    puts("TABUADA DE ADIÇÃO: \n");
    for(int i = 0; i <= 10; i++){
        printf("%d + %d = %d\n", valor, i, valor + i);
    }

    return 0;
}