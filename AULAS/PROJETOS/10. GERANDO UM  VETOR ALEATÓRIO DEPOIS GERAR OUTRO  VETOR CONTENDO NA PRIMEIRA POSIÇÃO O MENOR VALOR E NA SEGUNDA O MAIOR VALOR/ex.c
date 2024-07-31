#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 10

int main(){
    int v[TAM];
    int *pv = v;

    // PREENCHENDO O VETOR
    srand(time(NULL));

    for(int k=0; k<TAM; k++){
        *(pv+k) = rand() % (MAX+1);
    }


    //  PROCESSAMENTO
    int *pmm[2] = {NULL};

    pmm[0] = pv; 
    pmm[1] = pv;
    for(int k=0; k<TAM; k++){
        pmm[0] =(*pmm[0] > *(pv+k))?pv+k:pmm[0]; //menor
        pmm[1] =(*pmm[1] < *(pv+k))?pv+k:pmm[1]; //maior 
    }

    // SAÍDA

    // Vetor gerado
    printf("Vetor gerado, mais os endereços: \n");

    for(int k=0; k<TAM; k++){
        printf("[%p]: %d \n", pv+k, *(pv+k));
    }

    printf("Endereço do menor: %p\n", pmm+0);
    printf("Endereço do maior: %p\n", pmm+1);

    return 0;
}