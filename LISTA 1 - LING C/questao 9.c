#include <stdio.h>

int main(){
    int x, a, s;

    puts("Digite um núemro inteiro: ");
    scanf("%d", & x);

    a = x - 1;
    s = x + 1;

    printf("O antecessor do número %d é %d e o sucesso %d \n", x, a, s);

    return 0;
}