#include <stdio.h>

int main(){
    int valor1, valor2;

    printf("Digite um faixa de valor: ");
    scanf("%d %d", & valor1, & valor2);

    
    // PROCESSAMENTO / SAÍDA
    if(valor1 < valor2){
        int i = valor1, f = valor2;
        for (int x = i; x <= f; x++){
            if(x % 4 == 0){
                printf("%d^2 = %d\n", x, x * x);
            }
        }
    } else {
        int f = valor2, i = valor1;
        for (int x = i; x >= f; x--){
            if(x % 4 == 0){
                printf("%d^2 = %d\n", x, x * x);
            }
        }
    }

    return 0;
}