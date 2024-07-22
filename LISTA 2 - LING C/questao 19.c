#include <stdio.h>


int main(){
    int faixa1, faixa2;

    printf("Digite um número qualquer: ");
    scanf("%d", & faixa1);

    printf("Digite outro número qualquer: ");
    scanf("%d", & faixa2);
    
    int somatoriaDaFaixa;
    if(faixa2 > faixa1){
       for(int i = faixa1; i >= faixa2; i++){
            somatoriaDaFaixa += i;
       }
    } else{
        for(int i = faixa2; i >= faixa1; i++){
            somatoriaDaFaixa += i;
       }
    }

    

    printf("")
    return 0;
}