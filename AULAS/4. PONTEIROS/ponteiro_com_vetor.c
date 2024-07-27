// PONTEIRO (*)

#include <stdio.h>

int main(){
    //  - USO DE PONTEIROS PARA TRABALHAR MATRIZES/VETORES

    // Como chamar o por ponteiro um vetor:

    char v[4];
    char *pv = NULL;

    // - Usando indexação
    pv = v; // Atribuição de ponteiros
    pv[1] = 30;

    // - Sem indexação
    *(pv+2) = 40; // atribui 40 na posição 2 do vetor
    // Ou 
    *(v+2) = 40;

    // * abre a caixa, para eu colocar um valor no endereço



    return 0;
}