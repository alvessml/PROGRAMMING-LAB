#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 100

int main(){
    // GERANDO VETOR ALEATÓRIO
    int v[TAM];
    int *pv = NULL;
    pv = v;

    char vchar[TAM];

    srand(time(NULL));

    // Preenchendo o vetor
    for(int k=0; k<TAM; k++){
        *(pv+k) = rand() % (MAX+1);
        *(vchar+k) = rand() % (MAX+1);
    }

    // Imprimindo vetor inteiros
    printf("Vetor inteiros: \n");
    for(int k=0; k<TAM; k++){
        printf("[%p] : %d \n", pv+k, *(pv+k));
    }

    printf("\nVetor char: \n");
    for(int k=0; k<TAM; k++){
        printf("[%p] : %d \n", vchar+k, *(vchar+k));
    }


    // Buscaar o maior valor dos vetores
    int *pvMax = pv; // Vai receber o endereço do primeiro, declarando como maior
    for(int k=1; k<TAM; k++){
        // com ternário
        pvMax = (*pvMax < *(pv+k))?pv+k:pvMax;

        // sem ternário
        // if(*pvMax < *(pv+k)){
        //     pvMax = pvMax+k;
        // }
    }


    char *pvchMax = vchar;
    for(int k=1; k<TAM; k++){
        // com ternário
        pvchMax = (*pvchMax < *(pv+k))?pv+k:pvchMax;
    }

    printf("O maior valor em int estar no endereço: %d %p", );
    return 0;
}