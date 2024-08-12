#include <stdio.h>
// Protótipo mais usado de funções
int soma(int, int);
int subtracao(int, int);
int multiplicacao(int, int);
float divisao(int, int);
// voild, pois não retornará nada, só irá apresentar o menu para o usuário.
void menu();

int main(){
    int x, y;
    int op;
    puts("Digite o primeiro valor: ");
    scanf("%d", & x);

    puts("Digite o segundo valor: ");
    scanf("%d", & y);

    menu();
    scanf("%d", & op);

    switch (op){
        case 1:
            printf("A soma de %d + %d = %d.\n", x, y,soma(x, y));
            break;
        case 2:
            printf("A subtração de %d - %d = %d.\n", x, y, subtracao(x, y));
            break;
        case 3:
            printf("A multiplicação de %d x %d = %d.\n", x, y, multiplicacao(x, y));
            break;
        case 4:
            printf("A divisão de %d / %d = %.2f.\n", x, y, divisao(x, y));
            break;
    
        default:
            puts("Opção inválida! Digite novamente!");
            return 1;
    }

    return 0;
}   


int soma(int a, int b){
    int r;
    r = a + b;
    return r;
}

int subtracao(int a, int b){
    int r;
    r = a - b;
    return r;
}

int multiplicacao(int a, int b){
    int r;
    r = a * b;
    return r;
}

float divisao(int a, int b){
    int r;
    r = a / b;
    return r;
}

void menu(){
    puts("\nEscolha uma operação: ");
    puts("[1] - Adição\n[2] - Soma\n[3] - Multiplicação\n[4] - Divisão");
}