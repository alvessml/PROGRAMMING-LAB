#include <stdio.h>
#include <limits.h>

int main(){
    int x;
    int maior = INT_MIN;
    int menor = INT_MAX;

    while(1){
        printf("Digite um número qualquer (obs: Para sair digite um número negativo par): ");
        scanf("%d", &x);
        
        // Ignora números ímpares negativos
        if(x % 2 == 1 && x < 0){
            continue;
        }

        // Sai do loop se o número for par e negativo
        if(x % 2 == 0 && x < 0){
           break;  
        }
        
        // Atualiza o maior e menor
        if(x > maior){
            maior = x;
        }
        
        if(x < menor){
            menor = x;
        }
    }
    
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    int multMaiorMenor = maior * menor;

    printf("Maior foi %d e o menor %d, multiplicando-os resultará em %d.\n", maior, menor, multMaiorMenor);

    return 0;
}
