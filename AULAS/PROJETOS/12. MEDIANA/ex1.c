#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

int main(){
    int quantEle;
    printf("Digite um número para gerar um vetor com essa quantidade: ");
    scanf("%d", & quantEle);

    // Alocação dinâmica de memória
    int *p = NULL;
    if(!(p = (int*) malloc(quantEle * sizeof(int)))){
        puts("Memória indisponível!");
        exit(1);
    }
    
    // Preechendo o vetor
    srand(time(NULL));
    for(int i=0; i < quantEle; i ++){
        *(p+i) = rand() % MX;
    }

    // Exibindo o vetor
    puts("Vetor gerado: ");
    for(int i=0; i < quantEle; i++){
        printf("[%p] %d\n", p+i, *(p+i));
    }


    // Média
    int somatorio = 0;     
    for(int i=0; i < quantEle; i++){
        somatorio = *(p+i);
    }
    float media = ((float) somatorio / quantEle);


    // Mediana
    printf("Vetor ordenado: \n");
    int aux;
    for(int i=0; i < quantEle-1; i++){
        for(int j=i+1; j < quantEle;j++){
            if (*(p+i) >*(p+j)){
                aux = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = aux;
            }
        }
    }

    float mediana = (quantEle % 2)?*(p + (quantEle/2)):(float)();

    free(p);
    return 0;
}