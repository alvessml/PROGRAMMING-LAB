#include <stdio.h>
#include <string.h>

#define TAM 11

int main(){
    unsigned char valor[TAM];

    printf("Digite números qualquer: ");
    scanf("%10s", & valor);

    int contSete = 0;
    for(int k=0; k < strlen(valor); k++){
        if(valor[k] == '7'){
            contSete += 1;
        }
    }

    if(contSete > 0){
        printf("Existem %d algarismo 7 em %s.\n", contSete, valor);
    } else{
        printf("Não existem algarismo 7.\n");
    }

    return 0;
}