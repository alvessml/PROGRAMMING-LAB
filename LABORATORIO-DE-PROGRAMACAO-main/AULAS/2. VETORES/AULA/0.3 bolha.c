#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MIN 0
#define VETOR_QUANT 100

int main(){
    int vet[TAM];


    srand(time(NULL));
    //Preencher o vetor
    for(int k=0; k < TAM; k++){
        vet[k] = MIN + (rand() % VETOR_QUANT);
    }


    // Processamento
    for(int i=0; i<TAM; i++){ //Rodando 
        for(int j=0; j<(TAM-1); j++){
            if(vet[j] > vet[j+1]){
                vet[i] = vet[i+1];
                // Realizaçãõ da troca
                vet[j] = vet[j] ^ vet[j+1];
                vet[j+1] = vet[j] ^ vet[j+1];
                vet[j] = vet[j] ^ vet[j+1];
            }
            
        }
        
        
    }

    // Imprimindo o vetor
    for(int k=0; k<TAM; k++){
                        // Irá imprimir a posição do vetor em k variações
        printf("[%p] = %d", &vet[k], vet[k]);
        printf("\n");
    }

    return 0;
}