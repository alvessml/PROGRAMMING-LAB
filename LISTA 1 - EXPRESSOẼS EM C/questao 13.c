#include <stdio.h>

int main(){
    int a, b, c;

    puts("Digite um número para o var 'a': ");
    scanf("%d", & a);

    puts("Digite outro número para o var 'b': ");
    scanf("%d", & b);

    c = a;
    a = b;
    b = c;

    printf("O valor trocado das variáveis é: para 'a': %d , para 'b'\n: %d", a, b);

    return 0;
}