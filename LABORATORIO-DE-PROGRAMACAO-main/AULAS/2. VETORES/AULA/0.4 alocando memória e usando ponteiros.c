#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Aloca memória para o vetor
    int *vetor = (int*)malloc(tamanho * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }


    // Usa o vetor normalmente
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i * 2;
    }

    // Libera a memória alocada
    free(vetor);

    return 0;
}