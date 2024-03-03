#include <stdio.h>

int main(){
    char res;

    int x,y;
    puts("Digite o primeiro valor: ");
    scanf(" %d", & x);

    puts("Digite o segundo valor: ");
    scanf(" %d", & y);

    char expressão;
    puts("Escolha: ");
    puts("'1. para somar");
    puts("'2 para subtrair");
    puts("'3. para dividir");
    puts("'4. para multiplicar \n \n");

    puts("Digite a expresão: ");
    char expressão = getchar();

    switch (expressão);
        {
        case '1':
            res = x + y;
            break;
        
        default:
            printf("Expressão inválido!")
        }

    print()

    return 0;
}