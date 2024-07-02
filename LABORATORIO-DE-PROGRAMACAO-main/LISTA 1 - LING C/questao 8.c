#include <stdio.h>
#include <math.h>

int main(){
    double x, y = 2;
    double resultado;

    puts("Digite um número para elevalo ao quadrado: ");
    scanf("%lf", & x);

    resultado = pow(x, y); 

    printf("O número %.2lf elevado ao quadrado é %.2lf \n", x, resultado);

    return 0;
}