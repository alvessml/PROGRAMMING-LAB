#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// FUNÇÃO REALLOC

//  Exemplo de uso:
//  px = (int*) realloc(passa um ponteiro, novo_tamanho * sizeof(int))

#define TAM 100

int *alocarMemoria(int *, int);
void preencherVetor(int *, int, int, int);
void imprmirVetor(int *, int);

int main(){
    int QUANT;
    int *pv = NULL;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", & QUANT);

    // Chama a função de alocamento dinâmico de memória
    alocarMemoria(NULL, TAM);

    // Chama a função de preencher o vetor
    srand(time(NULL));
    preencherVetor(pv, 0, QUANT, TAM);

    // Chama a função para imprimir o vetor;
    imprimirVetor(pv, TAM);

    

    free(pv);
}

int *alocarMemoria(int *p, int t){
    int *pr; // pr = ponteiro do realloc
    if(!(pr = (int*) realloc(p, TAM * sizeof(int)))){
        puts("Memória indisponível!");
        exit(1);
    }

    return pr;
}

void preencherVetor(int *p,  int posicaoInicial, int quant, int t){
    for(int k=posicaoInicial; k < quant; k++){
        *(p+k) = rand() % t;
    }
}

void imprimirVetor(int *p, int tam){
    for(int k=0; k < tam; k++){
        printf("[%p]: %d", p, *(p+k));
    }
}