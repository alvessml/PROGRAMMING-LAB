#include <stdio.h>

int main(){
    double real, dolar, total;

    printf("Valor da cotação atual do dolar para real: $"); 
    scanf("%lf", & dolar);

    printf("Quantidade de reais para converter em dolar: R$"); 
    scanf("%lf", & real);

    total = real * dolar;

    printf("Valor convertido para dolar será: $%.2lf \n", total);

    return 0;
}