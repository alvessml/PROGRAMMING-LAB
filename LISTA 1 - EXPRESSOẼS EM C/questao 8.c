#include <stdio.h>
#include <math.h>

int main(){
    double x, y = 2;
    double resultado;

    puts("Digite um número para elevalo ao quadrado: ");
    scanf("%lf", & x);

    resultado = pow(x, y); 

    printf("O número %lf elevado ao quadrado é %lf \n", x, resultado);

    return 0;
}