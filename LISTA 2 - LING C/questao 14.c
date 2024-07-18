#include <stdio.h>


int main(){ 
    // ENTRADA
    int faixa1, faixa2;

    puts("Digite um número qualquer: ");
    scanf("%d", & faixa1);

    puts("Digite outro número qualquer: ");
    scanf("%d", & faixa2);


    // PROCESSAMENTO
    int quantDivTres;

    if(faixa2 > faixa1){
        for(int i = faixa1; i >= faixa2; i++){
            if(i % 3 == 0){
                quantDivTres += 1;
            }
        }
    } else{
        for(int i = faixa2; i >= faixa1; i++){
            if(i % 3 == 0){
                quantDivTres += 1;
            }
        }
    }


    // SAÍDA
    printf("Existem %d números divisíveis por 3 nesta faixa. \n", quantDivTres);

    return 0;
}