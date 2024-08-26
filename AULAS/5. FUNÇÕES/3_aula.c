#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAM 100


int *alocarMemoria(int *, int);
void preencherVetor(int *, int, int, int);
void imprimirVetor(int *, int);

int main(){
    int n;
    int *pv = NULL;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", & n);

    // Chama a função de alocamento dinâmico de memória
    pv = alocarMemoria(NULL, n);

    // Chama a função de preencher o vetor
    srand(time(NULL));
    preencherVetor(pv, 0, n, TAM);

    // Chama a função para imprimir o vetor;
    imprimirVetor(pv, n);


// ----------------------------------------------- //
    int new_n;
    printf("Digite a nova quantidade de elementos do vetor: ");
    scanf("%d", & new_n);

    // Chama a função de alocamento dinâmico de memória
    // Preenche apenas as novas posições se new_n for maior que n
    pv = alocarMemoria(pv, new_n);

    // Chama a função de preencher o vetor
    if (new_n > n) {
        preencherVetor(pv, n, new_n, TAM);
    }

    // Chama a função para imprimir o vetor;
    imprimirVetor(pv, new_n);

    free(pv);
}



int *alocarMemoria(int *p, int t){
    int *pr; // pr = ponteiro do realloc
    if(!(pr = (int*) realloc(p, t * sizeof(int)))){
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

void imprimirVetor(int *p, int quant){
    for(int k=0; k < quant; k++){
        printf("[%p]: %d\n", p+k, *(p+k));
    }
}