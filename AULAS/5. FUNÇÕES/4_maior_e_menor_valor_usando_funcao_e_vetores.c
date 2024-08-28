#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50
#define MAX 100

typedef void (*Func)();

void getValor(int, int);

int main(int argc, char **argv[]){
    if(argc!=2){
        printf("Use:\n\t %s <numb 0(maior)> ou <numb 1(menor)>\n\n", *argv);
        exit(1);
    }
    
     opcao = atoi(*(argv+1));

    int v[TAM];

    srand(time(NULL));
    for(int k=0; k < TAM; k++){
        v[k] = rand() % MAX;
    }

    puts("Vetor gerado: ");
    for(int k=0; k < TAM; k++){
        printf("%d ", v[k]);
    }

    int returnValor = getValor();

    return 0;
}


void getValor(int a, int b){
    Func v[] = {getmenorValor, getmaiorValor}
}

void getmenorValor(int tam, int r){
    for(int k=0; k < TAM; k++){
        if()
    }
}

void getmaiorValor(){
    
}