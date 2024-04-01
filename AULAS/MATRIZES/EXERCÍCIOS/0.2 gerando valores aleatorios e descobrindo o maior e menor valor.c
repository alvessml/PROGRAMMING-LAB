#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100
#define MIN 0
#define MAX 20

int main(){
    printf("Gerando valores aleatórios e descobrindo o maior e menor valor \n");

    int x[TAM];

    // Preenchimento do vetor
    int maior = x[0], menor = x[0];
    for(int k=1; k < 100; k++){
        x[k] = rand() & (MAX+1);
        maior = (maior < x[k])?x[k]: menor;
        // maior = (maior < x[k])?x[k]: menor;
        
    }

    // Print do vetor
    for(int k=0; k < 100; k++){
        printf("%d, ", x[k]);
        
    }

    printf("\n");

    return 0;
}