#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10;

int main(){
    int *p = NULL;
    int k;
    printf("Qunatidade de elementos: ");
    scanf("%d", & k);

    // Aloca memória
    // p = malloc(k * sizeof(int));

    //OU

    // p = (int*) malloc(k * sizeof(int))
    // (int*) - Usa-se muito para documentar o código, visto que esclarece a saída int.

    // if(!(p)){
    //     puts("Memória indisponível!");
    //     exit(1);
    // }

    // OU

    if(!(p = malloc(k * sizeof(int)))){
        puts("Memória indisponível!");
        exit(1);
    }


    // Preenchendo o vetor
    srand(time(NULL));
    for(int i=0; i < k; i++){
        *(p+i) = rand() % MX;
    }

    for(int i=0; i < k; i++){
        printf("[%p] %d\n", p+i, *(p+i));
    }

    free(p);
    return 0;
}