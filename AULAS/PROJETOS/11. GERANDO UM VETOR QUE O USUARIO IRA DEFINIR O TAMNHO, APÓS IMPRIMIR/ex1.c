#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10;

int main(){
    int *p = NULL;
    int quantLinha, quantColuna;
    printf("Qunatidade de linha: ");
    scanf("%d", & quantLinha);

    printf("Qunatidade de Coluna: ");
    scanf("%d", & quantColuna);


    if(!(p = malloc(quantLinha * quantColuna * sizeof(int)))){
        puts("Memória indisponível!");
        exit(1);
    }


    // Preenchendo o vetor
    srand(time(NULL));
    for(int i=0; i < quantLinha * quantColuna; i++){
        *(p+i) = rand() % MX;
    }

    for(int i=0; i < quantLinha * quantColuna; i++){
        printf("%d\t", quantLinha * quantColuna);
        if((i+1 )) printf("\n");
    }

    free(p);
    return 0;
}