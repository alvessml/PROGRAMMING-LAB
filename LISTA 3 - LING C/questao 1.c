#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

#define TAM 5
#define MAX 100

void *gerarVetor(int, int, float *);
void *displayVetor(int, int, float *);
void *maiorMenorValor(int, int, float *, float *, float *);


int main(){
    float v[TAM];
    float *pv = NULL;
    pv = v;

    srand(time(NULL));

    gerarVetor(TAM, MAX, pv);

    displayVetor(TAM, MAX, pv);
    printf("\n\n");

    float maior, menor;

    maiorMenorValor(TAM, MAX, pv, &maior, &menor);

    printf("Maior número é %.2f e o menor é %.2f\n", maior, menor);


    return 0;
}


void *gerarVetor(int tam, int max, float *x){
    for(int i=0; i<tam; i++){
        *(x+i) = ((float)rand() / RAND_MAX) * max;
        /*
        *(x+i) = ((float)rand() / RAND_MAX) * max;
         - rand() gera um número inteiro pseudoaleatório entre 0 e RAND_MAX.
         - Dividindo rand() por RAND_MAX, obtemos um número entre 0.0 e 1.0.
         - Multiplicando pelo valor max, o resultado será um número aleatório entre 0.0 e max.
         - *(x+i) armazena esse valor na posição i do vetor, acessado via o ponteiro x.
         */
    }
}

void *displayVetor(int tam, int max, float *x){
    for(int k=0; k<tam; k++){
        printf("%.2f\t", *(x+k));
    }
}

void *maiorMenorValor(int tam, int max, float *x, float *maior, float *menor){
    *maior = *menor = x[0];
    for(int i=0; i<tam; i++){
        if(x[i] > *maior){
            *maior = x[i];
        } else{
            *menor = x[i];
        }
    }
} 