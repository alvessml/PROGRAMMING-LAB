#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 15

int main(){

    int vet[TAM];

    srand(time(NULL));
    //Preencher o vetor
    for(int k=0; k < TAM; k++){
        vet[k] = rand() % (MAX+1);
    }

    printf("Vetor gerado: ");
    for(int k=0; k < TAM; k++){
        printf("%d, ", vet[k]);
    }
    printf("\n");


    // Processamento - Ordenação crescente
    int aux;
    for(int i = 0; i < (TAM-1); i++){
        for(int j = i+1; j < TAM; j++){
            if (vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }


    // Imprimindo o vetor ordinário
    printf("Vetor ordenáŕio: ");
    for(int k=0; k < TAM; k++){
        printf("%d, ", vet[k]);
    }

    return 0;
}