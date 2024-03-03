#include <stdio.h>

int main(){
    double res;

    int x,y;
    puts("Digite o primeiro valor: ");
    scanf(" %d", & x);

    puts("Digite o segundo valor: ");
    scanf(" %d", & y);

    puts("Escolha: ");
    puts("1. para somar");
    puts("2 para subtrair");
    puts("3. para dividir");
    puts("4. para multiplicar \n \n");
    
    char expressao = getchar();
    
    printf("Digite a expresão: %d\n", expressao);
    
    switch (expressao)
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
            return 1;
        }

    print("Reposta: %d \n", res);

    return 0;
}