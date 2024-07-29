#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define MAX 10

int main(){
    // GERANDO VETOR ALELATÓRIO 
    int v[TAM];
    int *pv = v; // ou int *pv = %v[0];

    int num;
    int *pnum = &num;

    // PREENCHENDO O VETOR 
    srand(time(NULL));

    for(int k=0; k<TAM; k++){
        *(pv+k) = rand() % (MAX+1);
    }


    // ENTRADA
    puts("Digite um número para saber há ocorrência no vetor gerado, se sim, dizer o endereço: ");
    scanf("%d", pnum);


    // PROCESSAMENTO / BUSCA / SAÍDA

    // BUSCA
    int *p = NULL;

    for(int k=0; k<TAM; k++){
        if(*pnum == *(pv+k)){
            p = pv+k;
            break;
        }
    }

    // Printando o Vetor gerado

    puts("Vetor gerado e o endereço de cada valor: ");

    for(int k=0; k<TAM; k++){
        printf("[%p]: %d \n", pv+k, *(pv+k));
    }  

    // SAÍDA
    // p existe?(print ....)
    // : se não (print ....)
    (p)?printf("\n\nO número %d estar no vetor, no endereço [%p].\n", *pnum, p)
    :printf("O núemro %d não estar contido no vetor. \n", *pnum);

    return 0;
}
