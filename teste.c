#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100
#define MAX 100

int main(){
    int x[TAM];

    // sdram serve para passar uma semente qualquer para gerar valores aleatórios apartir da semente, no
    // programa está passado de acordo com a hora da máquina, a qual é variável constantemente.
    // o NULL server só para eu obter somente a hora e nada a mais.
    srand(time(NULL));

    //Preencher o vetor
    for (int k=0; k<TAM; k++){
                        /*obs abaixo: serve para obeter um limite dos valores aleatório gerados, por meio
                        do resto da divisão de qualquer número aleatório gerado pela rand.*/
        x[k] = rand() % (MAX+1);
    }

    // Imprimir o vetor
    for (int k=0; k<TAM; k++){
        printf("%d, ",x[k]);
    }
    printf("\n");

    //Processamento
    int maior = x[0], menor = x[0];
    for (int k=0; k<TAM; k++){
        maior = (maior < x[k])?x[k]:maior;
        menor = (menor > x[k])?x[k]:menor;
    }

    // Saída: 
    printf("\t\tMaior: %d\n",maior);
    printf("\t\tMenor: %d\n",menor);
    

    return 0;
}