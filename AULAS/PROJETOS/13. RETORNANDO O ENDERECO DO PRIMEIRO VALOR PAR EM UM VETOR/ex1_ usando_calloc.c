#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 100

int *getPar(int *, int);

void main(){
    int *pv = NULL;

    // Alocação dinâmica de memória
    if(!(pv = (int*) calloc(TAM, sizeof(int)))){
        puts("Memória indisponível!");
        exit(1);
    }

    // Preenchendo o vetor
    srand(time(NULL));
    for(int k=0; k < 10; k++){
        *(pv + k) = rand() % TAM;
    }

    printf("Vetor gerado: \n");
    for(int k=0; k < 10; k++){
        printf("[%p] %d\n", pv+k, *(pv+k));
    }

    int *pe = getPar(pv, TAM);

    printf("Endereço do primeiro par é: [%p]. \n", pe);

    free(pv);
}

int *getPar(int *x, int t){
    for(int k=0; k < t; k++){
        if(*(x + k) % 2 == 0) return (x + k);
    }
}