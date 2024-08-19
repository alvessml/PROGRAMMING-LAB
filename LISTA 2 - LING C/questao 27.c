#include <stdio.h>

int main(){
    int x = 0;

    int maior = 0;
    int menor = 0;
    while(1){
        printf("Digite um número qualquer (obs: Para sair digite um número negativo par): ");
        scanf("%d", & x);

        if(x < 0 && x % 2 == 0){
            break;  
        }
        
        if(x > maior){
            maior = x;
        } else {
            menor = x;
        }
    }

    int multMaiorMenor = maior * menor;

    printf("Maior foi %d e o menor %d, multiplicando-os resultará em %d.\n", multMaiorMenor);

    return 0;
}