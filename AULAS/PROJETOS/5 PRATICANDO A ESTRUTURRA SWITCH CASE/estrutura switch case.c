#include <stdio.h>

int main(){
    int res;

    int x,y;

    char op;

    puts("Digite o primeiro valor: ");
    // scanf(" %d", & x);
    scanf("%d%*c", & x);

    puts("Digite o segundo valor: ");
    scanf("%d%*c", & y);

    puts("\nEscolha: ");
    puts("1. para somar");
    puts("2. para subtrair");
    puts("3. para dividir");
    puts("4. para multiplicar \n");
    
    getchar();

    op = getchar();

    scanf("%c", & op);
    
    switch (op)
        {
        case '1':
            res = x + y;
            break;
        case '2':
            res = x - y;
            break;
        case '3':
            res = x / y;
            break;
        case '4':
            res = x * y;
            break;
        
        default:
            puts("Expressão inválido! Digite novamente!");
        }

    printf("Reposta: %d \n", res);

    return 0;
}