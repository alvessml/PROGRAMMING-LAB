#include <stdio.h>


int main(){
    // ENTRADA DE DADOS 
    int faixa1, faixa2;

    puts("Digite um número qualquer: ");
    scanf("%d", & faixa1);

    puts("Digite um número qualquer: ");
    scanf("%d", & faixa2);


    // PROCESSAMENTO
    int somatorioDePares = 0;
    
    if(faixa2 > faixa1){
        for(int i = faixa1; i <= faixa2; i++){
            if(i % 2 == 0){
                somatorioDePares += i;
            }
        }
    } else{
        for(int i = faixa2; i <= faixa1; i++){
            if(i % 2 == 0){
                somatorioDePares += i;
            }
        }
    }


    // SAÍDA
    printf("O somátório dos pares dessa faixa entre esses dois números dados é %d\n", somatorioDePares);
    return 0;
}