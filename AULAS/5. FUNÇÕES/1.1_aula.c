#include <stdio.h>
// Protótipo mais usado de funções
int soma(int *, int *, int *);
int subtracao(int, int);
int multiplicacao(int, int);
float divisao(int, int);
// voild, pois não retornará nada, só irá apresentar o menu para o usuário.
void menu();

int main()
{
    int x, y, z;
    int op;
    puts("Digite o primeiro valor: ");
    scanf("%d", &x);

    puts("Digite o segundo valor: ");
    scanf("%d", &y);

    do
    {
        menu();
        scanf("%d", &op);
    } while (op < 1 || op > 4);
    puts("Opção inválida! Digite novamente!");

    switch (op)
    {
    case 1:
        z = soma(x, y);
        break;
    case 2:
        z = subtracao(x, y);
        break;
    case 3:
        z = multiplicacao(x, y);
        break;
    case 4:
        z = divisao(x, y);
        break;
    }

    printf("Resultado: %d", &z);
    return 0;
}

int soma(int *pa, int *pb, int *pr)
{
    *pr = *pa + *pb;
}

int subtracao(int a, int b)
{
    int r;
    r = a - b;
    return r;
}

int multiplicacao(int a, int b)
{
    int r;
    r = a * b;
    return r;
}

float divisao(int a, int b)
{
    float r;
    r = a / b;
    return r;
}

void menu()
{
    puts("\nEscolha uma operação: ");
    puts("[1] - Adição\n[2] - Soma\n[3] - Multiplicação\n[4] - Divisão");
}