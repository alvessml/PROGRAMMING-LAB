#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main()
{
    int TAM = 0;

    printf("Digite um tamanho para o vetor x e y: ");
    scanf("%d", &TAM);

    char *px = NULL;
    if (!(px = malloc(TAM * sizeof(int))))
    {
        printf("Memória insuficiente!");
        exit(1);
    }

    char *py = NULL;
    if (!(py = malloc(TAM * sizeof(int))))
    {
        printf("Memória insuficiente!");
        exit(1);
    }

    srand(time(NULL));
    for (int k = 0; k < TAM; k++)
    {
        *(px + k) = rand() % MAX;
        *(py + k) = rand() % MAX;
    }

    // PRINTANDO OS VETORES
    printf("Vetor gerado de x: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", *(px + i));
    }

    printf("\nVetor gerado de y: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", *(py + i));
    }

    // LÓGICA PARA PROCURAR O MENOR Di;
    int d = *(px + 0) - *(py + 0);
    int menor = 0;
    for (int t = 0; t < TAM; t++)
    {
        menor = *(px + t) - *(py + t);
        if (menor < d)
        {
            d = menor;
        }
    }
    printf("\n%d", d);

    free(px);
    free(py);
    return 0;
}