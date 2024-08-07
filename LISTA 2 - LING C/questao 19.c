#include <stdio.h>


int main(){
    int faixa1, faixa2;

    printf("Digite um número qualquer: ");
    scanf("%d", & faixa1);

    printf("Digite outro número qualquer: ");
    scanf("%d", & faixa2);
    
    int somatorioDaFaixa = 0;
    if(faixa2 > faixa1){
       for(int i = faixa1; i <= faixa2; i++){
            somatorioDaFaixa += i;
       }
    } else{
        for(int i = faixa2; i <= faixa1; i++){
            somatorioDaFaixa += i;
       }
    }

    if(faixa2 > faixa1){
        printf("Somatório da faixa entre %d e %d é %d.\n", faixa1, faixa2, somatorioDaFaixa);
    } else{
        printf("Somatório da faixa entre %d e %d é %d.\n", faixa2, faixa1, somatorioDaFaixa);
    }
    
    return 0;
}