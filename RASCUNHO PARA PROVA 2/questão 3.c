#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(){
    int x[TAM];

    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        x[i] = rand() % 11;
    }

    printf("Vetor aleatório gerado: \n");
    for(int i = 0; i < TAM; i++){
        printf("%d ", x[i]);
    }

    return 0;
}