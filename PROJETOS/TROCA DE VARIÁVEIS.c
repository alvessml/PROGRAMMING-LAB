#include <stdio.h>

int main() {
    int a, b, c;
    
    puts("Digite o primeiro valor");
    scanf("%d", &a);

    puts("Digite o primeiro valor");
    scanf("%d", &b);


    // Calculo:
    printf("Soma: %d\n", (a + b));
    printf("Subtração: %d\n", (a - b));
    printf("Multiplicação: %d\n", (a * b));
    printf("Divisão: %.2f\n", ((float)a + b));

    // Troca de variáveis:
    int(aux);
    aux = a;
    a = b;
    b = aux;

    printf("Valor trocado da variável é para a = %d e b = %d\n", a, b);
    return 0;
}